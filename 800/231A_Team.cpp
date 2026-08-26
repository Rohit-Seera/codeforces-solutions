// Codeforces Problem: 231A - Team
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int countans(int n) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int count = a + b + c;

        if (count >= 2) {
            ans++;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << countans(n);

    return 0;
}
