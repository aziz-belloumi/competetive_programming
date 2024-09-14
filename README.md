# the main purpose of this code is to calculate the maximum length of an increasing subarray without changing the orignal order of the array


- Read the number of elements, n.
- Populate a vector, arr, with n elements from the input.
- Initialize k and max_len to 1.
- Iterate through the vector from the second element:
- If the current element is greater than the previous element, increment k.
- If not, update max_len with the maximum of max_len and k, then reset k to 1.
- After the loop, update max_len with the maximum of max_len and k to account for the last subsequence.
- Print the length of the longest increasing subsequence.
