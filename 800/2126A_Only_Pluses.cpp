#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int mn = 9;

        while (x > 0) {
            int digit = x % 10;
            mn = min(mn, digit);
            x /= 10;
        }

        cout << mn << '\n';
    }

    return 0;
}