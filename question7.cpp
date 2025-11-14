#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, len;
	cin >> n;
	string str;
	string arr[n];
    
    int count;
    
    int arey1[n];
    string arey2[n];
    
    string p,x;
    
    
	for (int i = 0; i < n; i++) {
		cin >> len;

		string temp(len, '\0');
		cin >> setw(len) >> temp;

		arr[i] = temp;
	}
	
	
	for(int j = 0; j < n; j++) {
		int suzz = size(arr[j]);

		str = arr[j];
        count = 0;
		for(int k=0; k < suzz/2; k++) {
			if(str[k] == str[suzz-1-k]) {
				continue;
			}
			else {
			    count = count + 2;
			    p += to_string(k) + to_string(suzz-1-k);
			    

			}
			
			
		}
		
		arey1[j] = count;
		
        arey2[j] = p;
        
        p= "\0";
	}

    for(int i = 0; i < n; i++){
        cout << arey1[i] << endl;
        cout << arey2[i] << endl;
    }
    
	return 0;
}
