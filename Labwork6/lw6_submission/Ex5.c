#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // Declare p as a pointer to int
    int *p = &a;

    // Declare p2 as a pointer to a pointer to int
    int **p2 = &p;

    // Declare parr as an array of 10 pointers to int
    int *parr[10];
    for (int i=0; i<10; i++)
        parr[i] = &b;  // example assignment

    printf("Pointer to int: *p = %d\n", *p);
    printf("Pointer to pointer: **p2 = %d\n", **p2);
    printf("Array of pointers: parr[0] points to %d\n", *parr[0]);

    return 0;
}
