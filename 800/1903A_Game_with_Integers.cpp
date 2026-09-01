// Codeforces Problem: A. Game with Integers
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int t;
        cin >> t;

        if (t % 3 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
}
