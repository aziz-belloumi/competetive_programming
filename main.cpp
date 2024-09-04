#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int max = 0;
        int currentLength = 0;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            if (a == 0) {
                currentLength++;
            } else {
                if (max < currentLength) {
                    max = currentLength;
                }
                currentLength = 0;
            }
        }
        if (max < currentLength) {
            max = currentLength;
        }
        std::cout << max << std::endl;
    }
    return 0;
}