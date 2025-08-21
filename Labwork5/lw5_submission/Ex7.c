#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Please enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int count = 0;
    printf("Occurrences of 'a' and their positions in the string:\n");
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            printf("Position %d: '%c'\n", i, str[i]);
            count++;
        }
    }
    printf("Total occurrences of 'a' in the string: %d\n", count);

    return 0;
}
