#include <stdio.h>

// Helper function to swap values using pointers
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// 1. SELECTION SORT: Finds min element and moves it to the front
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // CORRECTED: Pass the addresses of the elements
        swap(&arr[min_idx], &arr[i]);
    }
}

// 2. BUBBLE SORT: Repeatedly swaps adjacent elements if they are in wrong order
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// 3. INSERTION SORT: Places each element in its correct position relative to sorted part
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Shift elements that are greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int data[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(data) / sizeof(data[0]);
    
    printf("Original Array: ");
    printArray(data, n);
    
    // selectionSort(data, n);
    // bubbleSort(data, n);
    insertionSort(data, n);
    
    printf("Sorted Array:   ");
    printArray(data, n);
    
    return 0;
}