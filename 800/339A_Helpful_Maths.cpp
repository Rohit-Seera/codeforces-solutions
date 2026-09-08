#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    if (!(std::cin >> s)) return 0;

    int count[4] = {0}; 

    for (char c : s) {
        if (c != '+') {
            count[c - '0']++;
        }
    }

    bool first = true;
    for (int num = 1; num <= 3; ++num) {
        while (count[num]--) {
            if (!first) {
                std::cout << '+';
            }
            std::cout << num;
            first = false;
        }
    }
    std::cout << '\n';

    return 0;
}
