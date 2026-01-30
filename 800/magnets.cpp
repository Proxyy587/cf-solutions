#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    string prev, cur;
    int groups = 0;
    for (int i = 0; i < n; ++i) {
        cin >> cur;
        if (i == 0 || cur != prev) ++groups;
        prev = cur;
    }
    cout << groups << '\n';
    return 0;
}