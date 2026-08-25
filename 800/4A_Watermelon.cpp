// Codeforces Problem: 4A - Watermelon
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>
using namespace std;

void divide(int n) {
    if (n % 2 == 0 && n > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    int n;
    cin >> n;
    divide(n);
}
