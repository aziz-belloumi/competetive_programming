#include <iostream>
#include <cmath>
int main() {
    std::string name;
    std::cin >> name;
    int total_rotations = 0;
    char current_position = 'a';
    for (char target : name) {
        int clockwise_distance = abs(target - current_position);
        int counterclockwise_distance = 26 - clockwise_distance;
        total_rotations += std::min(clockwise_distance, counterclockwise_distance);
        current_position = target;
    }
    std::cout << total_rotations << std::endl;
    return 0;
}