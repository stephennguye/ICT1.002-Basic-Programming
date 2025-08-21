#include <stdio.h>

int main() {
    int r2;
    float pi = 3.14;

    printf("Please enter the radius: ");
    scanf("%d", &r2);

    float area = 2 * pi * r2 * r2;
    float cir = 4 * pi * r2;

    printf("Area: %.2f \nCircumference: %.2f", area, cir);

    return 0;
}