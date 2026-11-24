#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long current = 1;
    long long total = 0;

    for (int i = 0; i < m; i++) {
        long long task;
        cin >> task;

        if (task >= current) {
            total += task - current;
        } else {
            total += n - current + task;
        }

        current = task;
    }

    cout << total << '\n';

    return 0;
}
