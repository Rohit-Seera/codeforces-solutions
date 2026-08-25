// Codeforces Problem: 71A - Way Too Long Words
// Rating: 800
// Problem Link: https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

void shortcut(string word, int n) {
    while (n--) {
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << (word.length() - 2) << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    string word;
    shortcut(word, n);
}
