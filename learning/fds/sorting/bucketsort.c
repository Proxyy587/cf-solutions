#include <stdio.h>
#include <stdlib.h>

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    // 1. Create n empty buckets (using a 2D array for simplicity in C)
    // In a real scenario, you'd use linked lists for dynamic sizing
    float buckets[n][n]; 
    int bucketCount[n]; // Keeps track of how many elements are in each bucket

    for (int i = 0; i < n; i++) bucketCount[i] = 0;

    // 2. Put array elements into different buckets
    for (int i = 0; i < n; i++) {
        int bi = n * arr[i]; // Index in bucket
        buckets[bi][bucketCount[bi]] = arr[i];
        bucketCount[bi]++;
    }

    // 3. Sort individual buckets
    for (int i = 0; i < n; i++) {
        insertionSort(buckets[i], bucketCount[i]);
    }

    // 4. Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < bucketCount[i]; j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    float data[] = {0.897, 0.565, 0.656, 0.123, 0.665, 0.343};
    int n = sizeof(data) / sizeof(data[0]);

    bucketSort(data, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) printf("%f ", data[i]);
    return 0;
}