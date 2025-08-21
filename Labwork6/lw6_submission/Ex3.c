#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int *p = arr;  // pointer to first element
    printf("Array elements accessed via pointer:\n");
    for (int i=0; i<n; i++)
        printf("%d ", *(p+i));
    printf("\n");

    return 0;
}
