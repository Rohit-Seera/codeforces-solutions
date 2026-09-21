#include <bits/stdc++.h> 
using namespace std; 
 
void solve() { 
    int n; 
    cin >> n; 
    int a1, a2, a3; 
    cin >> a1 >> a2 >> a3; 
    int s = min({a1, a2, a3}); 
    cout << n - s << endl; 
} 
 
int main() { 
    int t; 
    cin >> t; 
 
    while(t--) { 
        solve(); 
    } 
} 
