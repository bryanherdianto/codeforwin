#include <stdio.h>

int main(){
    int size;
    int arr1[100], arr2[100];
    int *ptr1, *ptr2;

    ptr1 = arr1;
    ptr2 = arr2;

    printf("Input array1 & array2 size: ");
    scanf("%d", &size);

    printf("Input array1 elements: ");
    for(size_t i = 0; i < size; i++){
        scanf("%d", ptr1 + i);
    }

    // copy elements
    for(size_t i = 0; i < size; i++){
        *ptr2 = *(ptr1 + i);
        ptr2++;
    }

    ptr2 = arr2;

    // output
    printf("Array1 elements: ");
    for(size_t i = 0; i < size; i++){
        if (i == size - 1){
            printf("%d\n", *(ptr1 + i));
            break;
        }
        printf("%d, ", *(ptr1 + i));
    }
    printf("Array2 elements: ");
    for(size_t i = 0; i < size; i++){
        if (i == size - 1){
            printf("%d", *(ptr2 + i));
            break;
        }
        printf("%d, ", *(ptr2 + i));
    }

    return 0;
}