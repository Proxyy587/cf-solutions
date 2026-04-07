#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a,b,c,d;
    cin >> n;
    
    
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d) cout << "YES\n";
        else cout << "NO\n";
    }

}
