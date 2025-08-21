#include<stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}