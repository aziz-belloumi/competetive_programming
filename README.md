# cp_half_even_half_odd


- The code begins by reading the number of test cases, t, from the input.
- For each test case, it reads an integer n and checks if n is divisible by 4 using n % 4 != 0.
- If n is not divisible by 4, it prints "NO" because it's impossible to create the required sequence.
- If n is divisible by 4, it prints "YES" and constructs two sequences: the first with even numbers from 2 to n, and the second with odd numbers from 1 to n-2, adding an adjustment value to balance the sum.
- Finally, the code prints the combined sequence of even and odd numbers, ensuring the sum of both halves is equal.
