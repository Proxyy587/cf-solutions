#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
   int n; 
   cin >> n;
   bool happy = false;
   
   int laptop[n][2];
   
   for(int i = 0; i < n; i++){
       for(int j = 0; j < 2; j++){
           cin >> laptop[i][j];
       }
   }
   
   for(int i=0; i < n; i++){
       for(int j=0; j < 1; j++){
        //   if 2 > 1 or 1x  < 2
           if(laptop[i][j] < laptop[i][j+1]){
               happy = true;
           } else break;
       }
   }
   
   if(happy) cout << "Happy Alex";
   else cout << "Poor Alex";
}