#include <stdio.h>

int main(){
    int array[100], sum;
    printf("Input 5 elements: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("Sum of all elements = %d", sum);
    return 0;
}