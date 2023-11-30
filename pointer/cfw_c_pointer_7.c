#include <stdio.h>

int main(){
    int size, temp;
    int arr[100];
    int *ptr;

    ptr = arr;

    printf("Input array size: ");
    scanf("%d", &size);

    printf("Input elements: ");
    for(size_t i = 0; i < size; i++){
        scanf("%d", ptr + i);
    }

    // reverse elements in array
    int high = size - 1, low = 0;
    while (high > low){
        temp = *(ptr + low);
        *(ptr + low) = *(ptr + high);
        *(ptr + high) = temp;
        high--;
        low++;
    }

    printf("Reversed array elements: ");
    for(size_t i = 0; i < size; i++){
        if (i == size - 1){
            printf("%d", *(ptr + i));
            break;
        }
        printf("%d, ", *(ptr + i));
    }

    return 0;
}