#include <iostream>
#include <set>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::set<long> container ;
        for(int i = 0 ; i < n ; i++) {
            long a ;
            std::cin >> a ;
            container.insert(a);
        }
        container.size() == n ? std::cout << "YES"<< std::endl : std::cout << "NO"<< std::endl ;
    }
    return 0;
}