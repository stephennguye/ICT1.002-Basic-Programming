#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b, c, d;

    // Input validation loop for 'a'
    do {
        printf("Please enter a positive integer a: ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("Invalid input. ");
        }
    } while (a <= 0);

    // Input validation loop for 'b'
    do {
        printf("Please enter a positive integer b: ");
        scanf("%d", &b);
        if (b <= 0) {
            printf("Invalid input. ");
        }
    } while (b <= 0);

    // Input validation loop for 'c'
    do {
        printf("Please enter a positive integer c: ");
        scanf("%d", &c);
        if (c <= 0) {
            printf("Invalid input. ");
        }
    } while (c <= 0);

    // Input validation loop for 'd'
    do {
        printf("Please enter a positive integer d: ");
        scanf("%d", &d);
        if (d <= 0) {
            printf("Invalid input. ");
        }
    } while (d <= 0);

    // Calculate the GCD of pairs of numbers
    int gcd1 = gcd(a, b);
    int gcd2 = gcd(c, d);
    int final_gcd = gcd(gcd1, gcd2);

    // Print the result
    printf("\nThe greatest common divisor of %d, %d, %d, and %d is: %d\n", a, b, c, d, final_gcd);

    return 0;
}
