#include <stdio.h>

int main(){
    int min, max, array[100];

    printf("Input array elements: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    max = array[0];
    min = array[0];
    for(int i = 0; i < 5; i++){
        if (array[i] < min){
            min = array[i];
        }
        if (array[i] > max){
            max = array[i];
        }
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
    return 0;
}