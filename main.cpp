#include <iostream>
long long countOrdinaryNumbers(long long n) {
    long long count = 0;
    for (int digit = 1; digit <= 9; ++digit) {
        long long ordinaryNumber = digit;
        while (ordinaryNumber <= n) {
            count++;
            ordinaryNumber = ordinaryNumber * 10 + digit;
        }
    }
    return count;
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long n;
        std::cin >> n;
        std::cout << countOrdinaryNumbers(n) << std::endl;
    }
    return 0;
}