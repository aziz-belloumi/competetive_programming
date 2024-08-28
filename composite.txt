#include <iostream>
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
void find_composite_pair(int n) {
    for (int x = 4; x < n; ++x) {
        if (!is_prime(x)) {
            int y = n - x;
            if (y > 1 && !is_prime(y)) {
                std::cout << x << " " << y << std::endl;
                return;
            }
        }
    }
}
int main() {
    int n;
    std::cin >> n;
    find_composite_pair(n);
    return 0;
}