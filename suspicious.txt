#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string tasks;
        cin >> tasks;
        unordered_map<char, int> last_position;
        bool suspicious = false;
        for (int i = 0; i < n; ++i) {
            char task = tasks[i];
            if (last_position.find(task) != last_position.end()) {
                if (i - last_position[task] > 1) {
                    suspicious = true;
                    break;
                }
            }
            last_position[task] = i;
        }
        if (suspicious) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}