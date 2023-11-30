#include <stdio.h>

// Input and output array elements using recursion

void printArray(int arr[], int start, int end){
    if (start == end){
        printf("%d", arr[start]);
        return;
    }
    printf("%d, ", arr[start]);
    printArray(arr, start + 1, end);
}

int main(){
    int size;

    // Input
    printf("Input size: ");
    scanf("%d", &size);

    int array[size];

    printf("Input elements: ");
    for (size_t i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    // Output
    printf("Array elements: ");
    printArray(array, 0, size - 1);

    return 0;
}