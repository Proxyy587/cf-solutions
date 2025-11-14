#include <iostream>
using namespace std;

int sumdigits_longlong(long long x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    if (s.size() == 1) {
        cout << 0 << '\n';
        return 0;
    }

    long long sum = 0;
    for (char c : s) sum += (c - '0');

    int ops = 1;
    while (sum >= 10) {
        sum = sumdigits_longlong(sum);
        ops++;
    }

    cout << ops << '\n';
    return 0;
}
