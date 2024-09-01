#include <iostream>
#include <vector>
int main() {
    int t ;
    std::cin >> t;
    while(t--) {
        short n ;
        std::cin >> n ;
        std::vector<short> a(n) ;
        short min = 10 ;
        short pos_min = -1 ;
        for(short i = 0; i < n ; i++) {
            std::cin >> a[i] ;
            if(min > a[i]) {
                min = a[i] ;
                pos_min = i ;
            }
        }
        long long product = 1 ;
        for(short i = 0; i < n ; i++) {
            if(pos_min == i) {
                a[i] = a[i] + 1 ;
            }
            product *= a[i] ;
        }
        std::cout << product << std::endl ;
    }
    return 0;
}