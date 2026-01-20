#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	int count = 0;
	
	cin >> n;
	cin >> k;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	   // cout << i << arr[i] << endl;
	}
	
	
	int target = arr[k-1];
	

	
	for(int i = 0; i < n; i++) {
	    if(arr[i] >= target && arr[i] != 0){
	       // cout << arr[i] << endl;
	        count++;
	    }
	}
	
	cout << count;
	
	return 0;
	
}
