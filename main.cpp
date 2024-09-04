#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        int minElement = *std::min_element(a.begin(), a.end());
        int minCandies = 0;
        for (int value : a) {
            minCandies += value - minElement;
        }
        std::cout << minCandies << std::endl;
    }
    return 0;
}