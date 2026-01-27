#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    bool canPass = true;
    cin >> n;
    cin >> p;
    
    int arr[n] = {0};
    int pr[p];
    
    
    // cout << "P array: ";
    for (int i = 0; i < p; i++){
        cin >> pr[i];
        // cout << pr[i] << ", ";  
    }
    // cout << endl;
    cin >> q;
    
    
    // cout << "P: "<< p << endl << "Q: " << q << endl;
    int qr[q];
    
    // cout << "Q array: ";
    for (int i = 0; i < q; i++){
        cin >> qr[i];
        // cout << qr[i] << ", ";  
    }
    // cout << '\n';
    
    for(int i = 0; i < p; i++){
        arr[pr[i] - 1]++;
        
    }
    for(int i = 0; i < q; i++){
        arr[qr[i] - 1]++;
        // cout << arr[i] << endl;
    }
    
    for(int i=0; i < n; i++){
        if(arr[i] == 0) canPass = false;
        // cout << arr[i] << "\n";
    }
    
    if(canPass) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
    
}
