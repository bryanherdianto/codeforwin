#include <stdio.h>

int main(){
    int size;
    int arr[100][100];

    printf("Input array size: ");
    scanf("%d", &size);

    printf("Input elements: ");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d", *(arr + i) + j);
        }
    }

    printf("Array elements: ");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", *(*(arr + i) + j));
        }
        puts("");
    }

    return 0;
}