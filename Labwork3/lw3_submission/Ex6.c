#include<stdio.h>

int main() {
    int n;
    printf("Please enter a positive integer n: ");
    scanf("%d", &n);

    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    
    printf("The factorial of %d is: %d", n, ans);
    return 0;
}