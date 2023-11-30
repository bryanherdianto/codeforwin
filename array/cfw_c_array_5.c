#include <stdio.h>

int main(){
    int array[100], max2, max;

    printf("Input 10 array elements: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    max2 = array[0];
    max = array[0];
    for(int i = 0; i < 10; i++){
        if(max == max2){
            max2 = array[i + 1];
        }
        if(array[i] > max){
            max2 = max;
            max = array[i];
        }
        if((max > array[i]) && max2 < array[i]){
            max2 = array[i];
        }
    }
    printf("Second largest = %d", max2);
    return 0;
}