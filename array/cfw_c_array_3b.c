#include <stdio.h>

int sum(int arr[], int start, int end){
    if (start == end){
        return arr[start];
    }
    return arr[start] + sum(arr, start + 1, end);
}

int main(){
    int array[100];
    printf("Input 5 elements: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    printf("Sum of all elements = %d", sum(array, 0, 4));
    return 0;
}