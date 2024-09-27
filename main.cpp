#include <iostream>
int find_optimal_x(int n) {
    int optimal_x = 2 ;
    int max_sum = 0 ;
    for(int x = 2 ; x <= n ; ++x) {
        int k = n / x ;
        int total_sum = x * k * (k+1) / 2 ;
        if(total_sum > max_sum){
            max_sum = total_sum ;
            optimal_x = x ;
        }
    }
    return optimal_x ;
}
int main() {
    int t ;
    std::cin >> t ;
    while(t--) {
        int n;
        std::cin >> n;
        std::cout << find_optimal_x(n) << std::endl;
    }
    return 0;
}