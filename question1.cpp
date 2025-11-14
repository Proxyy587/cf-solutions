#include <iostream>
using namespace std;

int main()
{
	int n;
	int x = 0;
	int y = 0;
	int flag = 0;

	cin >> n;

	if(n%2 != 0 || n <= 2) {
		flag = 0;
	}
	else {
		for (int i = 1; i <= n; i++) {
			x++;
			y= n - x;

			if (x%2 == 0 && y%2 == 0) {

			  
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}