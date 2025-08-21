#include<stdio.h>

int evesum(int arr[100], int n) {
    int sum1 = 0;;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum1 += arr[i];
        }
    }
    return sum1;
}

int oddsum(int arr[100], int n) {
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum2 += arr[i];
        }
    }
    return sum2;
}

int main() {
    int arr[100], n;
    printf("Please enter a positive integer: ");
    scanf("%d", &n);

    printf("The current array is: ");
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
        printf("%d ", arr[i]);
    }

    printf("\nThe sum of the even numbers from 1 to %d is: %d\n", n, evesum(arr, n));
    printf("The sum of the odd numbers from 1 to %d is: %d", n, oddsum(arr, n));

    return 0;
}