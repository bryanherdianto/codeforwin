#include <stdio.h>

// Input and output array elements

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
    printf("Output: ");
    for (size_t i = 0; i < size; i++){
        if (i == size - 1){
            printf("%d", array[i]);
            break;
        }
        printf("%d, ", array[i]);
    }
    
    return 0;
}