#include <bits/stdc++.h>
using namespace std;

// n, n-1, n-2, ..., 2, 1
// sum of natural numbers = n(n+1)/2
// selection sort: O(n^2)

void selectionSort(int arr[], int n){
    for(int i = 0; i <= n - 2; i++){
        int min = i;
        for (int j = i; j <= n-1; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    
}


int main() {
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	selectionSort(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
