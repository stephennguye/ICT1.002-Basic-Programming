#include<stdio.h>

int main() {
    int a, b, c;
    a = 1;
    b = 8;
    c = 4;

    if (a >= b && a >=c) {
        printf("The max is: %d\n", a);
    }

    else if (b >= a && b >= c) {
        printf("The max is: %d\n", b);

    }

    else if (c >=a && c >= b) {
        printf("The max is: %d\n", c);
    }

    if (a<=b && a <=c) {
        printf("The min is: %d", a);
    }

    else if (b<=a && b<=c) {
        printf("The min is: %d", b);
    }

    else if (c<=a && c <= b) {
        printf("The min is: %d", c);
    }


    return 0;
}