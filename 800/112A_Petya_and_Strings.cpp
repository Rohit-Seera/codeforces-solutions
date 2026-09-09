#include <iostream> 
#include <string> 
#include <cctype> 
 
using namespace std; 
 
int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    string s1, s2; 
    if (!(cin >> s1 >> s2)) return 0; 
 
    for (size_t i = 0; i < s1.length(); i++) { 
        s1[i] = tolower(s1[i]); 
        s2[i] = tolower(s2[i]); 
    } 
 
    if (s1 < s2) { 
        cout << -1 << "\n"; 
    } else if (s1 > s2) { 
        cout << 1 << "\n"; 
    } else { 
        cout << 0 << "\n"; 
    } 
 
    return 0; 
}