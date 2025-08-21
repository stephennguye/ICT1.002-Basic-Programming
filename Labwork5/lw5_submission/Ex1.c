#include <stdio.h>

int max(int arr[100], int n) {
    int maxi = arr[0]; // Initialize with the first element
    for (int i = 1; i < n; i++) { // Start loop from index 1
        if (arr[i] > maxi) { // Compare with the current maximum
            maxi = arr[i]; // Update maximum if current element is greater
        }
    }
    return maxi;
}

int min(int arr[100], int n) {
    int mini = arr[0]; // Initialize with the first element
    for (int i = 1; i < n; i++) { // Start loop from index 1
        if (arr[i] < mini) { // Compare with the current minimum
            mini = arr[i]; // Update minimum if current element is smaller
        }
    }
    return mini;
}

int main() {
    int n, arr[100];
    printf("Please enter the length of the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("This is the current array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("This is the max of the array: %d\n", max(arr, n));
    printf("This is the min of the array: %d", min(arr, n));

    return 0;
}