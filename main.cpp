#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count1 = 0, count2 = 0;
        int total_weight = 0;
        for (int j = 0; j < n; j++) {
            int weight;
            cin >> weight;
            total_weight += weight;
            if (weight == 1) count1++;
            else count2++;
        }

        if (total_weight % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int halfWeight = total_weight / 2;
            if (halfWeight <= count2 * 2) {
                // Check if the remaining weight can be fulfilled with 1-gram candies
                if (halfWeight % 2 <= count1) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                // All 2-gram candies used, check remaining weight
                if (halfWeight - count2 * 2 <= count1) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}