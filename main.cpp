#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n ;
    std::vector<long> arr(n);
    for(int i = 0 ; i < n ; i++) {
        std::cin >> arr[i];
    }
    int k = 1 ;
    int maximum_len = 0 ;
    for(int i = 0 ; i < n - 1 ; i++) {
        if(arr[i] < arr[i+1]) {
            k++ ;
        }
        else {
            if(maximum_len < k ) {
                maximum_len = k ;
            }
            k = 1 ;
        }
    }
    if(maximum_len < k) {
        maximum_len = k;
    }
    std::cout << maximum_len << std::endl ;
    return 0;
}