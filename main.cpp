#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int height = 0;
    int total_cubes_used = 0;
    int current_level = 1;
    while (true) {
        int cubes_for_current_level = current_level * (current_level + 1) / 2;
        if (total_cubes_used + cubes_for_current_level > n) {
            break;
        }
        total_cubes_used += cubes_for_current_level;
        height++;
        current_level++;
    }
    std::cout << height << std::endl;
    return 0;
}