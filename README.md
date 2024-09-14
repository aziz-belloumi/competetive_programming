# the main purpose of this code is to claculate the minimum number of rotations required to form a name from a letter wheel

- The wheel starts at the letter 'a', and a variable is initialized to track the total number of rotations.
- For each character in the string, the minimum number of rotations from the current letter to the target letter is calculated.
- The clockwise distance is found by calculating the absolute difference between the current and target character.
- The counterclockwise distance is calculated as 26 minus the clockwise distance (since the alphabet is circular).
- The smaller of the two distances (clockwise or counterclockwise) is added to the total number of rotations.
- The current position of the wheel is updated to the target character after each rotation.
- At the end, the total number of rotations required to print the entire string is printed.
