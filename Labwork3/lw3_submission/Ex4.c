#include <stdio.h>

int main() {
    int number;
    int product = 1;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; 
    }

    int digit;
    while (number > 0) {
        digit = number % 10; 
        product *= digit;   
        number /= 10;       
    }

    printf("Product of digits: %d\n", product);

    return 0;
}