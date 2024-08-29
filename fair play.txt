#include <iostream>
#include <algorithm>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        short a , b, c, d ;
        std::cin >> a>> b >> c >> d;
        if(std::max(a,b) < std::min(c,d)) {
            std::cout << "NO" << std::endl ;
        }
        else if(std::min(a,b) > std::max(c,d)) {
            std::cout << "NO" << std::endl ;
        }
        else {
            std::cout << "YES" << std::endl ;
        }
    }
    return 0;
}