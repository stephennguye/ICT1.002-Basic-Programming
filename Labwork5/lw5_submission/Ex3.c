#include <stdio.h>

#define N 10   

// Bubble sort
void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Insertion sort
void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// Selection sort
void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int minIndex = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[N] = {5, 2, 9, 1, 7, 3, 8, 6, 4, 0};

    printf("Original array:\n");
    printArray(arr, N);

    // Bubble sort
    int arr1[N]; for(int i=0;i<N;i++) arr1[i]=arr[i];
    bubbleSort(arr1,N);
    printf("Bubble sorted: "); printArray(arr1,N);

    // Insertion sort
    int arr2[N]; for(int i=0;i<N;i++) arr2[i]=arr[i];
    insertionSort(arr2,N);
    printf("Insertion sorted: "); printArray(arr2,N);

    // Selection sort
    int arr3[N]; for(int i=0;i<N;i++) arr3[i]=arr[i];
    selectionSort(arr3,N);
    printf("Selection sorted: "); printArray(arr3,N);

    return 0;
}
