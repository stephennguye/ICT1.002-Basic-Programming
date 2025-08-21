#include<stdio.h>

int facto(int n) {
    if (n>1)
        return n*facto(n-1);

    else
        return 1;
}


int main() {
    int n;
    printf("Please enter an integer n: ");
    scanf("%d", &n);
    
    printf("Factorial of %d is: %d", n, facto(n));

    return 0;
}