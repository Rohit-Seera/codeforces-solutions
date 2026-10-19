#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total = k * w * (w + 1) / 2;
    int borrow = max(0, total - n);

    cout << borrow << endl;

    return 0;
}