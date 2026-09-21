#include <iostream> 
#include <algorithm> 
#include <cmath> 
 
using namespace std; 
 
void solve() { 
    long long a, b, c; 
    cin >> a >> b >> c; 
    long long score = max(abs(a - b), abs(a + c - b)); 
    cout << score << "\n"; 
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
