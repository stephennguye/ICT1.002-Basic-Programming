#include<stdio.h>

int main() {
//Using C output function printf to write a simple program such as “Hello USTH World”//
    printf("Hello USTH World\n");

//Using C output function printf to display different types of variables such as int, float, double, and char.//
    int lol = 123;
    float hihi = 3.14;
    double jiji = 3.14444444;
    char du = 'A';

    printf("%d\n", lol);
    printf("%f\n", hihi);
    printf("%c\n", du);
    printf("%f\n", jiji);

//Use C input function scanf read a string from the keyboard and display the string to the screen.//
    char str[100];
    scanf("%s", str);
    printf("%s", str);
    return 0;
}

