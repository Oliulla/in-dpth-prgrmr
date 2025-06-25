## 🟢 Very Easy (1-25) — _“Logic warm-up”_

| #   | Problem                                              | Description                                              | Input Example                        | Output Example                      |
| --- | ---------------------------------------------------- | -------------------------------------------------------- | ------------------------------------ | ----------------------------------- |
| 1   | Find the maximum element in an array                 | Return the largest number in the array                   | `[1, 5, 3, 9, 2]`                    | `9`                                 |
| 2   | Find the minimum element in an array                 | Return the smallest number in the array                  | `[7, -1, 3, 0, 5]`                   | `-1`                                |
| 3   | Calculate the sum of all elements                    | Return the sum of all values in the array                | `[1, 2, 3, 4]`                       | `10`                                |
| 4   | Calculate the average of elements                    | Return the average (mean) of all values                  | `[2, 4, 6, 8]`                       | `5.0`                               |
| 5   | Count even and odd numbers in an array               | Return count of even and odd values                      | `[1, 2, 3, 4, 5]`                    | `Even: 2, Odd: 3`                   |
| 6   | Find number of positive, negative, and zero elements | Return how many of each are in the array                 | `[-1, 0, 2, -3, 4]`                  | `Positive: 2, Negative: 2, Zero: 1` |
| 7   | Check if the array is sorted                         | Return `true` if non-decreasing order, else `false`      | `[1, 2, 3, 4]`                       | `true`                              |
| 8   | Reverse the array                                    | Return a new array with elements in reverse order        | `[1, 2, 3]`                          | `[3, 2, 1]`                         |
| 9   | Copy one array to another                            | Return a copy of the array                               | `[4, 5, 6]`                          | `[4, 5, 6]`                         |
| 10  | Merge two arrays                                     | Concatenate two arrays into one                          | `[1, 2]`, `[3, 4]`                   | `[1, 2, 3, 4]`                      |
| 11  | Search an element (Linear Search)                    | Check if a value exists in the array                     | `[3, 6, 9]`, search `6`              | `Found at index 1`                  |
| 12  | Count frequency of each element                      | Return a map/object of element counts                    | `[1, 2, 2, 3]`                       | `{1: 1, 2: 2, 3: 1}`                |
| 13  | Remove duplicates (brute force)                      | Return array with unique elements only                   | `[1, 2, 2, 3]`                       | `[1, 2, 3]`                         |
| 14  | Find second largest element                          | Return the 2nd highest number                            | `[10, 20, 5, 30]`                    | `20`                                |
| 15  | Find second smallest element                         | Return the 2nd lowest number                             | `[4, 1, 2, 3]`                       | `2`                                 |
| 16  | Left rotate array by one                             | Shift all elements left, first becomes last              | `[1, 2, 3]`                          | `[2, 3, 1]`                         |
| 17  | Right rotate array by one                            | Shift all elements right, last becomes first             | `[1, 2, 3]`                          | `[3, 1, 2]`                         |
| 18  | Swap first and last elements                         | Exchange the first and last items in array               | `[7, 8, 9]`                          | `[9, 8, 7]`                         |
| 19  | Find common elements in two arrays (brute force)     | Return array of shared elements                          | `[1, 2, 3]`, `[2, 3, 4]`             | `[2, 3]`                            |
| 20  | Insert element at a specific position                | Insert value at given index                              | `[1, 2, 4]`, insert `3` at index `2` | `[1, 2, 3, 4]`                      |
| 21  | Delete element from specific position                | Remove value at given index                              | `[5, 6, 7]`, remove index `1`        | `[5, 7]`                            |
| 22  | Move all zeros to the end (brute force)              | Push zeros to the end without reordering other elements  | `[0, 1, 0, 3, 0, 5]`                 | `[1, 3, 5, 0, 0, 0]`                |
| 23  | Count occurrences of a number                        | Return how many times a specific number appears          | `[1, 2, 2, 2, 3]`, count `2`         | `3`                                 |
| 24  | Check if two arrays are equal                        | Return `true` if arrays have same elements in same order | `[1, 2, 3]` & `[1, 2, 3]`            | `true`                              |
| 25  | Print elements at even index                         | Return values at even indices (0-based)                  | `[10, 20, 30, 40, 50]`               | `[10, 30, 50]`                      |

## 🟡 Easy (26–50) — _“Logic sharpening”_

| #   | Problem                                       | Description                                              | Input Example              | Output Example              |
| --- | --------------------------------------------- | -------------------------------------------------------- | -------------------------- | --------------------------- |
| 26  | Remove duplicates from sorted array           | Return array without duplicates (sorted input)           | `[1, 1, 2, 2, 3]`          | `[1, 2, 3]`                 |
| 27  | Check if array is palindrome                  | Return `true` if array reads same forwards and backwards | `[1, 2, 3, 2, 1]`          | `true`                      |
| 28  | Rotate array by K positions (brute force)     | Shift elements right by K steps                          | `[1, 2, 3, 4, 5]`, `k = 2` | `[4, 5, 1, 2, 3]`           |
| 29  | Union of two arrays                           | Return all unique elements from both arrays              | `[1, 2, 3]`, `[3, 4]`      | `[1, 2, 3, 4]`              |
| 30  | Intersection of two arrays                    | Return common elements                                   | `[1, 2, 3]`, `[2, 3, 4]`   | `[2, 3]`                    |
| 31  | Find the missing number (1 to n)              | One number is missing from 1 to n                        | `[1, 2, 4, 5]`             | `3`                         |
| 32  | Find the duplicate number                     | One number repeats in range 1 to n                       | `[1, 3, 4, 2, 2]`          | `2`                         |
| 33  | Largest sum of contiguous subarray (Kadane’s) | Return max subarray sum                                  | `[-2, 1, -3, 4, -1, 2]`    | `5`                         |
| 34  | Merge two sorted arrays                       | Combine and sort two sorted arrays                       | `[1, 3, 5]`, `[2, 4, 6]`   | `[1, 2, 3, 4, 5, 6]`        |
| 35  | Count pairs with given sum                    | Count (i, j) such that `arr[i] + arr[j] == sum`          | `[1, 5, 7, -1]`, sum = 6   | `2`                         |
| 36  | First repeating element                       | Return the first element that repeats                    | `[10, 5, 3, 4, 3, 5, 6]`   | `5`                         |
| 37  | First non-repeating element                   | Return first element with only 1 occurrence              | `[9, 4, 9, 6, 7, 4]`       | `6`                         |
| 38  | Count inversions in array (brute force)       | Count pairs (i,j) where i < j and arr\[i] > arr\[j]      | `[2, 4, 1, 3, 5]`          | `3`                         |
| 39  | Separate even and odd numbers                 | Return two arrays: evens first, then odds                | `[1, 2, 3, 4]`             | `[2, 4, 1, 3]`              |
| 40  | Max product of two integers                   | Return max product from any 2 numbers                    | `[1, 10, -5, 4, -2]`       | `50`                        |
| 41  | Rearrange alternately (max, min...)           | Return array rearranged as max, min, max, min            | `[1, 2, 3, 4, 5, 6]`       | `[6, 1, 5, 2, 4, 3]`        |
| 42  | Find majority element (> n/2 times)           | Return element if occurs more than n/2 times             | `[2, 2, 1, 2, 2]`          | `2`                         |
| 43  | Count 1s in a binary sorted array             | Return count of 1s (all 1s before 0s or vice versa)      | `[1, 1, 1, 0, 0]`          | `3`                         |
| 44  | Sort array of 0s, 1s (2-pass)                 | Return array sorted with all 0s then 1s                  | `[0, 1, 0, 1, 1, 0]`       | `[0, 0, 0, 1, 1, 1]`        |
| 45  | Move all negative elements to one side        | Put negatives at beginning (order doesn't matter)        | `[1, -1, 3, -2, 4]`        | `[-1, -2, 3, 1, 4]`         |
| 46  | Check if array elements are consecutive       | Return true if all elements are consecutive numbers      | `[4, 2, 1, 3, 5]`          | `true`                      |
| 47  | Equilibrium index of array                    | Index where sum left = sum right                         | `[-7, 1, 5, 2, -4, 3, 0]`  | `3`                         |
| 48  | Leaders in an array                           | Elements greater than all to their right                 | `[16, 17, 4, 3, 5, 2]`     | `[17, 5, 2]`                |
| 49  | Find peak element                             | Return index of element greater than neighbors           | `[1, 3, 20, 4, 1]`         | `2`                         |
| 50  | Find Kth smallest/largest (sort-based)        | Return kth smallest/largest after sorting                | `[3, 2, 1, 5, 4]`, k = 2   | Smallest: `2`, Largest: `4` |

## 🟠 Medium (51–80) — _“Logic pressure cooker”_

| #   | Problem                              | Description                                       | Input Example                 | Output Example          |
| --- | ------------------------------------ | ------------------------------------------------- | ----------------------------- | ----------------------- |
| 51  | Longest subarray with given sum      | Max length of subarray with sum `k`               | `[1, 2, 3, 1, 1, 1]`, `k=3`   | `3`                     |
| 52  | Subarray with given XOR              | Count subarrays with XOR `k`                      | `[4, 2, 2, 6, 4]`, `k=6`      | `4`                     |
| 53  | Subarray with sum 0                  | True if any subarray has sum 0                    | `[4, 2, -3, 1, 6]`            | `true`                  |
| 54  | Count subarrays with sum K           | Return number of subarrays with sum `k`           | `[1, 1, 1]`, `k=2`            | `2`                     |
| 55  | Sliding window maximum               | Max of each window of size `k`                    | `[1,3,-1,-3,5,3,6,7]`, `k=3`  | `[3,3,5,5,6,7]`         |
| 56  | Find duplicate (Floyd's method)      | Cycle detection approach                          | `[1,3,4,2,2]`                 | `2`                     |
| 57  | Maximum product subarray             | Return max product from contiguous subarray       | `[2,3,-2,4]`                  | `6`                     |
| 58  | Longest increasing subsequence       | Return length of LIS                              | `[10,9,2,5,3,7,101,18]`       | `4`                     |
| 59  | Longest consecutive subsequence      | Max count of consecutive integers                 | `[100,4,200,1,3,2]`           | `4`                     |
| 60  | Next greater element                 | Return next greater for each element              | `[4,5,2,10]`                  | `[5,10,10,-1]`          |
| 61  | Trapping rain water                  | Return units of water trapped                     | `[0,1,0,2,1,0,1,3]`           | `5`                     |
| 62  | Max sum circular subarray            | Return max sum in circular manner                 | `[1,-2,3,-2]`                 | `3`                     |
| 63  | Sort 0s,1s,2s (1 pass)               | Dutch Flag algo, 1 pass                           | `[0,2,1,2,0]`                 | `[0,0,1,2,2]`           |
| 64  | Kth smallest (QuickSelect)           | Return kth smallest element                       | `[7,10,4,3,20,15]`, `k=3`     | `7`                     |
| 65  | Rearrange pos/neg alternatively      | Pos, neg, pos, neg...                             | `[1, 2, -3, -1, -2, 3]`       | `[1, -3, 2, -1, 3, -2]` |
| 66  | Min jumps to end                     | Min jumps to reach end                            | `[2,3,1,1,4]`                 | `2`                     |
| 67  | Min swaps to sort array              | Return number of swaps to sort                    | `[4, 3, 2, 1]`                | `2`                     |
| 68  | Stock buy & sell (max profit)        | Maximize single buy/sell profit                   | `[7,1,5,3,6,4]`               | `5`                     |
| 69  | All duplicates (O(n), no space)      | Return all elements that appear twice             | `[4,3,2,7,8,2,3,1]`           | `[2,3]`                 |
| 70  | Subarray with equal 0s and 1s        | Return true if such a subarray exists             | `[0,1,0]`                     | `true`                  |
| 71  | Count subarrays with equal 0s and 1s | Return count                                      | `[0,0,1,1]`                   | `4`                     |
| 72  | Count subarrays product < K          | Return number of such subarrays                   | `[10, 5, 2, 6]`, `k=100`      | `8`                     |
| 73  | Partition array into equal sum       | Return true if can partition into 2 with same sum | `[1, 5, 11, 5]`               | `true`                  |
| 74  | Minimize max diff of heights         | Change height by ±K to minimize max diff          | `[1,5,8,10]`, `k=2`           | `5`                     |
| 75  | Median of two sorted arrays          | Return median                                     | `[1,3]`, `[2]`                | `2.0`                   |
| 76  | Rotate matrix 90°                    | Rotate square matrix CW 90°                       | `[[1,2],[3,4]]`               | `[[3,1],[4,2]]`         |
| 77  | Spiral matrix traversal              | Return elements in spiral order                   | `[[1,2,3],[4,5,6],[7,8,9]]`   | `[1,2,3,6,9,8,7,4,5]`   |
| 78  | Search in rotated array              | Find element in rotated sorted array              | `[4,5,6,7,0,1,2]`, target `0` | `4`                     |
| 79  | Row with max 1s in binary matrix     | Return row index with most 1s                     | `[[0,1,1],[1,1,1],[0,0,1]]`   | `1`                     |
| 80  | Max sum rectangle in 2D matrix       | Return max sum of any rectangle                   | `[[1,2,-1],[-3,4,5]]`         | `9`                     |

Alright, warrior 🧠 — now we enter **🔴 HARD MODE** aka _"DSA Hunger Games"_ territory.

This ain’t your average LeetCode stroll. You’ll need snacks, hydration, and probably a warm hug after some of these.

But guess what? I got your back with another clean, **input/output + problem description** table for problems **81–100**.

## 🔴 Hard (81–100) — _“Brain gym. Bring snacks.”_

| #   | Problem                                    | Description                                               | Input Example                                       | Output Example           |
| --- | ------------------------------------------ | --------------------------------------------------------- | --------------------------------------------------- | ------------------------ |
| 81  | Max profit in job scheduling               | Weighted job scheduling (with end/start/profit arrays)    | `start=[1,2,3]`, `end=[3,4,5]`, `profit=[50,10,40]` | `90`                     |
| 82  | Max of min for every window size           | For every window size, find max of all window minimums    | `[10,20,30,50,10,70,30]`                            | `[70,30,20,10,10,10,10]` |
| 83  | Count inversions (Merge Sort)              | Number of inversion pairs (i < j, a\[i] > a\[j])          | `[2, 4, 1, 3, 5]`                                   | `3`                      |
| 84  | Merge overlapping intervals                | Merge intervals like `[1,3], [2,6]`                       | `[[1,3],[2,6],[8,10]]`                              | `[[1,6],[8,10]]`         |
| 85  | Smallest range from K lists                | Minimize range covering at least 1 element from each list | `[[4,10,15],[1,5,20],[10,13]]`                      | `[10, 13]`               |
| 86  | Median of stream                           | Continuously insert numbers, get median                   | `[1,2,3]` inserted step-by-step                     | `1,1.5,2`                |
| 87  | Max XOR of two nums                        | Return max XOR from any 2 elements                        | `[3,10,5,25,2,8]`                                   | `28`                     |
| 88  | Subarrays with sum divisible by K          | Count of subarrays with sum % K == 0                      | `[4,5,0,-2,-3,1]`, `K=5`                            | `7`                      |
| 89  | Max sum increasing subsequence             | Like LIS but you sum values                               | `[1, 101, 2, 3, 100]`                               | `106`                    |
| 90  | Distinct subarrays with ≤ K unique         | Count subarrays with ≤ K distinct numbers                 | `[1,2,1,2,3]`, `K=2`                                | `10`                     |
| 91  | Kth largest sum of subarrays               | Find the Kth largest sum from all contiguous subarrays    | `[20,-5,-1]`, `K=3`                                 | `14`                     |
| 92  | Count number of triangles                  | Count triplets i,j,k where a\[i] + a\[j] > a\[k]          | `[4,6,3,7]`                                         | `3`                      |
| 93  | Repeating + Missing number                 | One element repeats, one is missing                       | `[4,3,6,2,1,1]`                                     | `[1,5]`                  |
| 94  | Max length of bitonic subarray             | Bitonic = first increasing, then decreasing               | `[12,4,78,90,45,23]`                                | `5`                      |
| 95  | Subarrays with sum < K                     | Count subarrays with sum less than K                      | `[1,11,2,3,15]`, `K=10`                             | `4`                      |
| 96  | Matrix median (binary search)              | Find median in sorted row-wise matrix                     | `[[1,3,5],[2,6,9],[3,6,9]]`                         | `5`                      |
| 97  | Largest rectangle in histogram             | Find area of largest rectangle                            | `[2,1,5,6,2,3]`                                     | `10`                     |
| 98  | Maximal rectangle in matrix                | Max rectangle of 1s in binary matrix                      | `[[1,0,1,0,0],[1,0,1,1,1]]`                         | `6`                      |
| 99  | Count smaller elements after self          | Return array with count of smaller elements to right      | `[5,2,6,1]`                                         | `[2,1,1,0]`              |
| 100 | Split array into K subarrays (min max sum) | Binary search on answer                                   | `[7,2,5,10,8]`, `k=2`                               | `18`                     |
