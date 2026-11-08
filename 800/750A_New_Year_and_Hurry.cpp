#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int time = 240 - k;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        time -= 5 * i;

        if (time >= 0) {
            solved++;
        } else {
            break;
        }
    }

    cout << solved << endl;

    return 0;
}
