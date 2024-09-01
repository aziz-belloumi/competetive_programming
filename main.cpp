#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    short t ;
    std::cin >> t;
    while(t--) {
        short n ;
        std::cin >> n ;
        std::vector<short> a(n) ;
        for(short i = 0; i < n ; i++) {
            std::cin >> a[i] ;
        }
        auto maxElementIter = std::max_element(a.begin(), a.end());
        short diff = *maxElementIter;
        for(short i = 0; i < n ; i++) {
            for(short j = 0; j < n ; j++) {
                if(i != j && std::abs(a[i] - a[j] ) < diff) {
                    diff = std::abs(a[i] - a[j] ) ;
                }
            }
        }
        std::cout << diff << std::endl ;
    }
    return 0;
}