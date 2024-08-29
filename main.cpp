#include <iostream>
int main() {
    int n ;
    std::cin >> n;
    if(n == 2) {
        std::cout << 1 << std::endl;
        std::cout << 2 << std::endl;
    }
    else if(n == 3) {
        std::cout << 1 << std::endl;
        std::cout << 3 << std::endl;
    }
    else {
        if(n % 2 == 0 ) {
            std::cout << n / 2 << std::endl;
            for(int i = 0 ; i < n / 2 ; i++ ) {
                std::cout << 2 << " ";
            }
            std::cout << std::endl ;
        }
        else {
            n = n - 3 ;
            std::cout << n / 2  + 1 << std::endl;
            for(int i = 0 ; i < n / 2 ; i++ ) {
                std::cout << 2 << " ";
            }
            std::cout << 3 << std::endl ;
        }
    }
    return 0;
}