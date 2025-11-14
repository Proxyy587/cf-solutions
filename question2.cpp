#include <iostream>
#include <string>

using namespace std;

int main()
{
    // first letter last letter 
    // middle part ijisjdiajsd => number size()
    
    string name;
    cin >> name;
    
    int length = size(name);
    
    if(length <= 10) cout << name;
    
    else cout << name[0] << to_string(length-2) << name[length-1];
    
    return 0;
}