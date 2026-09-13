#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> wrongzzz;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            wrongzzz.push_back(i);
        }
    }
    int l1 = 0;
    int r2 = wrongzzz.size() - 1;
    while (l1 < r2) {
        swap(arr[wrongzzz[l1]], arr[wrongzzz[r2]]);
        l1++;
        r2--;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            cout << "NO"<<endl;
            return;
        }
    }
    cout << "YES"<<endl;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}