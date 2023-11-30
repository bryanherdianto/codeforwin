#include <stdio.h>

int main(){
    int size;
    int arr[100];
    int *ptr;

    ptr = arr;

    printf("Input array size: ");
    scanf("%d", &size);

    printf("Input elements: ");
    for(size_t i = 0; i < size; i++){
        scanf("%d", ptr + i);
    }

    printf("Array elements: ");
    for(size_t i = 0; i < size; i++){
        if (i == size - 1){
            printf("%d", *(ptr + i));
            break;
        }
        printf("%d, ", *(ptr + i));
    }

    return 0;
}