#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int oddC = 0, evenC = 0;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) evenC++;
        else oddC++;
    }


    // cout << evenC << endl << oddC << endl;

    if (evenC > oddC) {
        for (int i = 0; i < n; i++) {
            if (!(arr[i] % 2 == 0)) cout << i + 1;
        }
    }

    else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) cout << i + 1;
        }
    }
}