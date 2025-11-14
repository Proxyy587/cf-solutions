#include <iostream>
#include <string>

using namespace std;

string wayTooLong(string name){
    
    int length = size(name);

	if(length <= 10) return name;

	else return name[0] + to_string(length-2) + name[length-1];
}

int main()
{
	// first letter last letter
	// middle part ijisjdiajsd => number size()
	int n;
	cin >> n;
	string arr[n];
	
	string answr[n];
	
    for(int i=0; i<n; i++){
        	cin >> arr[i];
        	answr[i] = wayTooLong(arr[i]);
    }
    
    for(int i=0; i<n; i++) {
        cout << answr[i] << endl;
    }
    
	return 0;
}