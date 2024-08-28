#include <iostream>
#include <vector>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        if (n % 4 != 0) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
            std::vector<int> a;
            for (int i = 2; i <= n; i += 2) {
                a.push_back(i);
            }
            a.push_back(n + n/2 - 1);
            for (int i = 1; i < n; i += 2) {
                a.push_back(i);
            }
            for (int i = 0; i < n; ++i) {
                std::cout << a[i] << " ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}