#include <stdio.h>

// arr is not full
int add_end(int arr[], int pos, int data) {
    arr[pos] = data;
    pos++;
    return pos;
}

// arr is full
int add_end_full(int arr[], int b[], int n, int pos, int data) {
    for(int i = 0; i < n; i++) {
        b[i] = arr[i];
    }
    b[pos] = data;
    pos++;
    return pos;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int size = sizeof(arr)/sizeof(arr[0]);

    int pos = n;

    if(n == size) {
        int b[size+2];
        pos = add_end_full(arr, b, n, pos, 6);
         for(int i = 0; i < pos; i++) {
        printf("%d ", b[i]);
    }
    }
    else {
        int b[size+2];
        pos = add_end(b, pos, 6); 
         for(int i = 0; i < pos; i++) {
        printf("%d ", arr[i]);
    }
    }
    
    return 0;
}