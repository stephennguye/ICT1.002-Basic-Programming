#include <stdio.h>

int gcd(int a, int b) {
    int cd;
    if (a>=b) {
        for (int i = 1; i <=b; i++) {
            if (a%i==0 && b%i==0) {
                cd = i;
            }
        }
    }
    else if (a<=b) {
        for (int i = 1; i <=a; i++) {
            if (a%i==0 && b%i==0) {
                cd = i;
            }
        }
    }

    return cd;
}

int main() {
    int a, b;
    printf("Please enter a positive integer a: ");
    scanf("%d", &a);
    printf("\nPlease enter a positive integer b: ");
    scanf("%d", &b);

    printf("\nThe greatest common divisor of %d and %d is: %d", a, b, gcd(a, b));

    return 0;
}