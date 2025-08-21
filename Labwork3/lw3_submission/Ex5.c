#include <stdio.h>

int main() 
{
    int a = 0, b = 1, sum;

    int n;
    printf("Please enter the length of your sequence: ");
    scanf("%d", &n);

    printf("The Fibonacci sequence is: ");
    printf("%d %d ", a, b); // Print the first two numbers

    for (int i = 2; i < n; i++) { // Start from index 2 since we've already printed the first two numbers
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    return 0;
}
