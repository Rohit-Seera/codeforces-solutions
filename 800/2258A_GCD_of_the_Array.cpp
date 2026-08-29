// Codeforces Problem: 2258A - GCD of the Array
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/2258/A

#include <bits/stdc++.h>
using namespace std;

void solveque() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) {
        cout << arr[0] << "\n";
    } else {
        cout << gcd(arr[0], arr[n - 1]) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solveque();
    }

    return 0;
}
