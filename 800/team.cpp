#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
    int count;
    int answer = 0;
	int x;
	int arr[n][3];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> x;

			if (x == 0 || x == 1) arr[i][j] = x;
			else return 1;
		}
	}

	for(int i = 0; i < n; i++) {
	    count = 0;
		for(int j = 0; j < 3; j++) {
		    if (arr[i][j] == 1) count++;
		}
		if (count >= 2 ) answer++;
	}
	
	cout << answer;
	return 0;

}