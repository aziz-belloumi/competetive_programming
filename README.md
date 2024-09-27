# the main purpose of this code is to find the optimal x ( <n ) to maximize the sum of all the multiples of x

- The function find_optimal_x(int n) iterates over all possible values of x from 2 to n.
- For each value of x, it calculates the number of multiples k such that kx <= n.
- The sum of multiples of x is calculated using the formula x * k * (k + 1) / 2.
- The function keeps track of the maximum sum and updates the optimal value of x.
- In the main() function, the number of test cases t is read.
- For each test case, the value of n is input, and the optimal x is printed.
- The algorithm runs in O(n) time per test case, ensuring efficiency for the given constraints.
