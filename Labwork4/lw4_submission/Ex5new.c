#include <stdio.h>
#include "power.h"

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result_normal = power_normal(x, n);
    printf("Result using normal function: %.2lf\n", result_normal);

    double result_recursive = power_recursive(x, n);
    printf("Result using recursive function: %.2lf\n", result_recursive);

    return 0;
}
