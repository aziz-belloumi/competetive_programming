#include <iostream>
#include <algorithm>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c, n;
        std::cin >> a >> b >> c >> n;
        int total = a + b + c + n;
        if (total % 3 != 0) {
            std::cout << "NO" << std::endl;
            continue;
        }
        int target = total / 3;
        int needed_for_a = std::max(0, target - a);
        int needed_for_b = std::max(0, target - b);
        int needed_for_c = std::max(0, target - c);
        int total_needed = needed_for_a + needed_for_b + needed_for_c;
        if (total_needed <= n) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}