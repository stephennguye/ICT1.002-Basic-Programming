#include<stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 1;
    int x;
    scanf("%d", &x);

    int poly = a*x*x + b*x + c;
    printf("Answer is: %d", poly);
    return 0;
}