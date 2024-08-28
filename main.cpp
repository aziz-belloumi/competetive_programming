#include <iostream>
#include <string>
#include <algorithm>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string dummy;
        std::cin >> dummy;
        std::string input_string;
        std::cin >> input_string;
        std::string timur = "Timur";
        std::sort(timur.begin(), timur.end());
        std::sort(input_string.begin(), input_string.end());
        if (timur == input_string) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}