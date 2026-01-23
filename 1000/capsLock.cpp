#include <bits/stdc++.h>

#include <string>

using namespace std;

int main() {
    string str;
    int count = 0;
    cin >> str;

    int sizeStr = size(str);
    // a b c - 97 98 99
    // A B C - 65 

    for (int i = 0; i < sizeStr; i++) {
        if (int(str[i]) >= 65 &&
            int(str[i]) <= 90 && i != 0) {
            count++;
        }

        if (int(str[i]) >= 65 &&
            int(str[i]) <= 90 && i == 0) {
            count++;
        }
    }

    if (count == sizeStr - 1 && (str[0] >= 97 && str[0] <= 122)) {
        for (int i = 0; i < sizeStr; i++) {
            if (int(str[i]) >= 65 &&
                int(str[i]) <= 90 &&
                i != 0) {
                str[i] += 32;
            }

            if (
                int(str[i]) >= 97 &&
                int(str[i]) <= 122 &&
                i == 0)
            {
                str[i] -= 32;
            }

        }
    } else if (count == sizeStr) {
        for (int i = 0; i < sizeStr; i++) {
            str[i] += 32;
        }
    }

    cout << str;
}