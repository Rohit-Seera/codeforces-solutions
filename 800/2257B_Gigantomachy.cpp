#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    long long S_A = a[0] + n - 1;
    long long S_B = b[0] + m - 1;

    if (S_A >= S_B) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
