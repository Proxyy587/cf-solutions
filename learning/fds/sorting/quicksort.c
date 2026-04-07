#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;
    int j = high;
    
    while (i < j) {
        while (arr[j] <= pivot && k <= high - 1) {
            i++;
        }
        
        while (arr[i] > pivot && j >= low + 1) {
            j--;
        }
        
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[low], &arr[j]);
    
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    
    printf("Unsorted Array: ");
    printArray(data, n);
    
    quickSort(data, 0, n - 1);
    
    printf("Sorted Array:   ");
    printArray(data, n);
    
    return 0;
}