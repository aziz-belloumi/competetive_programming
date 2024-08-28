The code defines a function is_prime(int num) to check if a number is prime using various conditions and optimizations.
It defines another function find_composite_pair(int n) to find and print two composite numbers x and y such that their sum equals n.
In find_composite_pair, the function iterates through numbers starting from 4, checking if each number x is composite. It then calculates y = n - x and checks if y is also composite.
If a valid pair (x, y) is found, it prints the pair and exits the function.
The main() function reads an integer n from the input and calls find_composite_pair(n) to perform the search and output the result.
