#include <stdio.h>

int main(){
    int a, b;
    int *ptr1, *ptr2;
    
    // input
    scanf("%d%d", &a, &b);

    // assign pointer
    ptr1 = &a;
    ptr2 = &b;

    // arithmetic
    int sum, diff, mult, div;
    sum = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    mult = *ptr1 * *ptr2;
    div = *ptr1 / *ptr2;

    // output
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Multiply = %d\n", mult);
    printf("Division = %d\n", div);

    return 0;
}