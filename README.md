**Method 1:**

sort the array use the built in C++ library method sort() on the array.

First Start with iterating the array from the first position of the array.

Where any of the two consecutive elements would be equal that is arr[i]==arr[i+1], return true (pointing that there is such element).

Otherwise, break the loop and return false (which means there are no such elements as duplicates).

**Time Complexity:**

O(n log n) (due to sorting)

**Space Complexity:**

O (1) 
