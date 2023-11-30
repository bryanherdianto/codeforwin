#include <stdio.h>

int main(){
    int array[1000], loc[1000], index = 0;

    printf("Input 10 elements on the array:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
        if(array[i] < 0){
            loc[index] = array[i];
            index++;
        }
    }

    for(int i = 0; i < index; i++){
        if (i == index - 1){
            printf("%d", loc[i]);
            break;
        }
        printf("%d, ", loc[i]);
    }
    return 0;
}