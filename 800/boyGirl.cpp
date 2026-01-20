#include <bits/stdc++.h>
using namespace std;

int main() {
    string username;
    cin >> username;

    int len = username.length();
    int distinct = 0;

    for (int i = 0; i < len; i++) {
        bool alreadySeen = false;

        for (int j = 0; j < i; j++) {
            if (username[i] == username[j]) {
                alreadySeen = true;
                break;
            }
        }

        if (!alreadySeen)
            distinct++;
    }

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

// chatgpt method 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string username;
//     cin >> username;

//     set<char> s;

//     for (char c : username) {
//         s.insert(c);
//     }

//     int distinct = s.size();

//     if (distinct % 2 == 0)
//         cout << "CHAT WITH HER!";
//     else
//         cout << "IGNORE HIM!";
// }
