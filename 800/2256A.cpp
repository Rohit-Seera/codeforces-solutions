#include <bits/stdc++.h> 
using namespace std; 
 
void solve() { 
    long long a, b, c; 
    cin >> a >> b >> c; 
 
    // Sort the three numbers 
    if (a > b) swap(a, b); 
    if (b > c) swap(b, c); 
    if (a > b) swap(a, b); 
 
    cout << min(c - a, b) << '\n'; 
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
 
    int t; 
    cin >> t; 
 
    while (t--) { 
        solve(); 
    } 
 
    return 0; 
} 
