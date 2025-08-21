#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare pointer to function
    int (*funcPtr)(int, int);

    // Assign function address
    funcPtr = add;

    int x=5, y=10;
    printf("Calling add() using pointer: %d + %d = %d\n", x, y, funcPtr(x,y));

    return 0;
}
