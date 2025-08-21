#include <stdio.h>

double power1(double x, int n) {
    if (n==0) {
        return 1.0;
    }

    else if (n < 0) {
        double ans = 1.0;
        for (int i = 0; i < -n; i++) {
            ans *= 1.0 / x;
        }
        return ans;
    }
    else {
        double ans = 1.0;
        for (int i = 0; i < n; i++) {
            ans *= x;
        }
        return ans;
    }  
}

double power2(double x, int n) {
    if (n == 0)
        return 1.0;


    if (n > 0)
        return x * power2(x, n - 1);

    else
        return 1.0 / (x * power2(x, -n - 1));
}

int main() {
    double x; 
    int n; 

    printf("Please enter a number x: ");
    scanf("%lf", &x);

    printf("Please enter a number n: "); 
    scanf("%d", &n);

    printf("The result of %.2f^%d using the first function is: %.2f\n", x, n, power1(x, n));
    printf("The result of %.2f^%d using the second function is: %.2f\n", x, n, power2(x, n));

    return 0;
}