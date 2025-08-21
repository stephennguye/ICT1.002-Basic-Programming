#include <stdio.h>
#include <string.h>

int main() {
    char str[100], x;
    printf("Please enter a string: ");
    scanf("%s", str);

    printf("Please enter the character to delete: ");
    scanf(" %c", &x);

    int len = strlen(str);
    printf("Original string: %s\n", str);
    
    printf("String after deleting '%c': ", x);
    for (int i = 0; i < len; i++) {
        if (str[i] != x) {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
