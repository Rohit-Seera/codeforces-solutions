#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int zeros = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0)
            zeros++;
    }

    // Need at least two easy problems
    if (zeros < 2) {
        cout << -1 << '\n';
    }
    // First and last are already easy
    else if (a[0] == 0 && a[n - 1] == 0) {
        cout << 0 << '\n';
    }
    // One of them is hard
    else if (a[0] == 0 || a[n - 1] == 0) {
        cout << 1 << '\n';
    }
    // Both are hard
    else {
        cout << 2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
