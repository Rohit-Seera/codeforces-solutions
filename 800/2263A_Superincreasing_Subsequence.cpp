#include <iostream> 
using namespace std; 
void solve() { 
    int n; 
    cin >> n; 
    int one_count = 0; 
    for (int i = 0; i < n; ++i) { 
        int valuzzzz; 
        cin >> valuzzzz; 
        if (valuzzzz == 1) { 
            one_count++; 
        } 
    } 
    if (one_count >= (n + 1) / 2) { 
        cout << "Bessie\n"; 
    } else { 
        cout << "Elsie\n"; 
    }} 
 
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