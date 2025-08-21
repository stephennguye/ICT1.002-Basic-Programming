#include <stdio.h>

double fx(int x) {
    return 2.5 * x;
}

double gxy(int x, int y) {
    return x * y;
}

int main() {
    double x, y;
    printf("Please enter a number x: ");
    scanf("%lf", &x);

    printf("Please enter a number y: ");
    scanf("%lf", &y);

    printf("The solution to f(x)=2.5x with x = %.2f is %.2f\n", x, fx(x));
    printf("The solution to g(x,y)=xy with x = %.2f, y = %.2f is %.2f", x, y, gxy(x, y));
    return 0;
}