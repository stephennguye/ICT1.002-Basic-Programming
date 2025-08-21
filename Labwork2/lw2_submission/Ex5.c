#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    
    // Input coefficients from the keyboard
    printf("Enter the values for a, b, c, d, e, and f:\n");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    // Calculate determinant and its related determinants
    int D = a * e - b * d;
    int Dx = c * e - b * f;
    int Dy = a * f - c * d;

    // Check if the system has a unique solution (D != 0)
    if (D != 0) {
        // Calculate the values of x and y
        float x = (float) Dx / D;
        float y = (float) Dy / D;

        // Print the solution
        printf("The solution for x is: %.2f\n", x);
        printf("The solution for y is: %.2f\n", y);
    } else {
        // If the determinant is 0, the system may have no solution or infinitely many solutions
        if (Dx == 0 && Dy == 0)
            printf("The system has infinitely many solutions.\n");
        else
            printf("The system has no solution.\n");
    }

    return 0;
}
