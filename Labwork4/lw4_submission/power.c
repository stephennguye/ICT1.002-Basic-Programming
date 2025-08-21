#include "power.h"

// Normal function to calculate x^n
double power_normal(double x, int n) {
    double result = 1.0;
    int i;
    
    if (n >= 0) {
        for (i = 0; i < n; i++) {
            result *= x;
        }
    } else {
        // If n is negative, calculate (1/x)^(-n)
        for (i = 0; i < -n; i++) {
            result *= (1 / x);
        }
    }

    return result;
}

// Recursive function to calculate x^n
double power_recursive(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n > 0) {
        return x * power_recursive(x, n - 1);
    } else {
        // If n is negative, calculate (1/x)^(-n)
        return (1 / x) * power_recursive(x, n + 1);
    }
}
