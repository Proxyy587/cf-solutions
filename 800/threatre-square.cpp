#include <bits/stdc++.h>
#include <cmath>
using namespace std;



int main() {
    long long n,m,a;
    cin >> n >> m >> a;
    
    long long row = n;
    long long col = m;
    
    // this can be written as given below without using any inbuilt function
    // int len = ceil(row / a);
    // int brea = ceil(col / a);

    long long len = (n + a - 1) / a;
    long long brea = (m + a - 1) / a;
    
    cout << len * brea;
    
}
