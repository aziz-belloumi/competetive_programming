# the main purpose of this code is to find the maximum length of the space containing consecutive zeros

- Read the number of test cases, t.
- For each test case, read n, the number of elements.
- Initialize max and currentLength to 0.
- For each element, read the integer a.
- If a is 0, increment currentLength.
- If a is not 0, compare currentLength with max and update max if necessary, then reset currentLength to 0.
- After the loop, compare currentLength with max one last time and update max if needed.
- Print the maximum length of consecutive zeros.
