#include <stdio.h>

int main() {
    int n;

    // Input a natural number greater than 1
    printf("Enter a natural number greater than 1: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    printf("%d \n %d\n", 2, 3);
    // Find and print all prime numbers from 1 to n
    for (int i = 4; i <= n; i++) {
        if (i % 2 != 0 && i % 3 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
