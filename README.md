**Method 1:**

sort the array use the built in C++ library method sort() on the array.

First Start with iterating the array from the first position of the array.

Where any of the two consecutive elements would be equal that is arr[i]==arr[i+1], return true (pointing that there is such element).

Otherwise, break the loop and return false (which means there are no such elements as duplicates).

**Time Complexity:**

O(n log n) (due to sorting)

**Space Complexity:**

O (1) 

**Method 2:**

First Intialize the map and then store the frequency of each element.

Now Initalize an iterator it and point it to the beginnig of the map

Now traverse the map until (it != mp.end()) and check if there is any elemnt whose frequncy is  > 1.

If you found any element whose frequency is > 1 then return true

If you reach the out if the loop it indicates there is no duplicates in your array. So return false

**Time Complexity:**

O(n)

**Space Complexity:**

O (n) 
