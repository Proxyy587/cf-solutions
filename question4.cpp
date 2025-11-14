#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int x = 0;
    cin >> n;
    string ope;
    
    for(int k=1; k <= n; k++){
        cin >> ope;
        for(int i=0; i <= 1; i++){
            
            if(ope[i] == '+' && ope[i+1] == '+') x++;
            if(ope[i] == '-' && ope[i+1] == '-') x--;
        }
    }
    
    cout << x;
    
	return 0;

}