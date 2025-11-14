#include <iostream>
#include <string>

using namespace std;


int sumdigits(int n){
    int sum = 0; 

    while(n > 0){
        int lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    return sum;
    
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int total;
    
    total = sumdigits(n);
    
    if (size(to_string(n)) <= 1) cout << count;
    else {
        
    
    while(size(to_string(total)) > 1){
        total = sumdigits(total);
        count++;
    }
   
   
    cout << count+1;
    
    }
    return 0;

}