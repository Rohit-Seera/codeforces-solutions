// Codeforces Problem: 282A - Bit++
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int bitsol(int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;

        if (x == "++X" || x == "X++")
            count++;
        else if (x == "--X" || x == "X--")
            count--;
    }

    cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    bitsol(n);
}
