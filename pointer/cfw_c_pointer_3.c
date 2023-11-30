#include <stdio.h>

int main(){
    int a, b;
    int *ptr1, *ptr2, *temp;

    // input
    scanf("%d%d", &a, &b);

    // assign pointer
    ptr1 = &a;
    ptr2 = &b;
    temp = &a;

    // output before swapped
    printf("Original numbers: %d, %d\n", *ptr1, *ptr2);

    // swap
    ptr1 = ptr2;
    ptr2 = temp;

    // output
    printf("Swapped numbers: %d, %d\n", *ptr1, *ptr2);

    return 0;
}