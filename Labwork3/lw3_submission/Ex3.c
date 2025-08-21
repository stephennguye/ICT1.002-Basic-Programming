#include<stdio.h>

int main() {
    printf("Please enter an integer: ");
    int n;
    scanf("%d", &n);

    float ans = 0.0; 

    for (int i = 1; i <= n; i++) {
        ans += 1.0 / i; 
    }

    printf("The ans is: %.2f", ans);

    return 0;
}
