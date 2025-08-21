#include <stdio.h>

// Function to compute the greatest common divisor using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    
    // Input validation
    do {
        printf("Please enter a positive integer a: ");
        scanf("%d", &a);
    } while (a <= 0);

    do {
        printf("Please enter a positive integer b: ");
        scanf("%d", &b);
    } while (b <= 0);

    // Compute and print the GCD
    printf("\nThe greatest common divisor of %d and %d is: %d\n", a, b, gcd(a, b));

    return 0;
}
