#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count[4]={0};
    cin >> n;

    int arr[n];
    
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i <= n; i++){
        if(arr[i] == 1) count[0]++;
        if(arr[i] == 2) count[1]++;
        if(arr[i] == 3) count[2]++;
        if(arr[i] == 4) count[3]++;
    }
    
    int taxi = 0;
    
    taxi += count[3];
    taxi += count[2];
   
    count[0] = count[0] - count[2];
    if(count[0] < 0)
    count[0]=0;
    
    taxi += count[1]/2;
    if(count[1]%2 != 0) count[1] = 1;
    else count[1] = 0;
    
    count[0] = count[0] + count[1]*2;
    
    if(count[0]%4 == 0)
    taxi += count[0]/4;
    else
    taxi += (count[0]/4) + 1;
    
    cout << taxi << endl;
    
    
    // for(int i = 0; i < 4; i++){
    //     cout << count[i] << endl;
    // }

}