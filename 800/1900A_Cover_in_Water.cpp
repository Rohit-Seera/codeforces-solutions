// Codeforces Problem: 1900A - Cover in Water
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;

int sol() {
    int n;
    cin >> n;

    int count = 0;
    string s;
    cin >> s;

    for (int i = 0; i < n - 2; i++) {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
            cout << "2" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        sol();
    }
}
