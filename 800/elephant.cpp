#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int result=0;
    cin >> n;
    
    
    // cout << n << endl;
    for(int i = 0; i < n; n -= 5){
        result++;
    }
    
    
    cout << result;
}

