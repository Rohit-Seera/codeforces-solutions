// Codeforces Problem: A. Nene and the Maze
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/1896/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> copy_v = v;
    sort(copy_v.begin(), copy_v.end());

    if (copy_v == v) {
        cout << "Yes" << endl;
        return;
    } else if (v[0] == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
