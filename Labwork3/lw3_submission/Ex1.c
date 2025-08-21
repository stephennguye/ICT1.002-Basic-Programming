#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number greater than 1: ");
    scanf("%d", &n);

    // Check if n is greater than 1
    if (n <= 1) {
        printf("Invalid input. Please enter a natural number greater than 1.\n");
        return 1; // Exit the program with an error code
    }

    printf("Divisors of %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
