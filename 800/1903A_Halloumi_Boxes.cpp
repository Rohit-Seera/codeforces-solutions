// Codeforces Problem: 1903A - Halloumi Boxes
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> c_of_a = a;
        sort(c_of_a.begin(), c_of_a.end());

        if (c_of_a == a || k > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

