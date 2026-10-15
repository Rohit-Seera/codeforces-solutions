#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val;
    for (int r = 1; r <= 5; ++r) {
        for (int c = 1; c <= 5; ++c) {
            cin >> val;
            if (val == 1) {
                cout << abs(r - 3) + abs(c - 3) << "\n";
                return 0;
            }
        }
    }

    return 0;
}