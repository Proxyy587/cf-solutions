#include <bits/stdc++.h>
#include <string>

using namespace std;

string toLowerCase(string str){
    int len = size(str);
    
     for(int i = 0; i < len; i++){
        if(str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
    
    return str;
}

int main() {
    int n;
    
    cin >> n;
    
    string arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        
        if(toLowerCase(arr[i]) == "YES") cout << "YES" << endl;
        
        else cout << "NO" << endl;
    }
}