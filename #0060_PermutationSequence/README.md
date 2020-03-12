# [60. Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)

## Description

The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:
1. `123`
2. `132`
3. `213`
4. `231`
5. `312`
6. `321`

Given n and k, return the kth permutation sequence.

Note:

* Given n will be between 1 and 9 inclusive.
* Given k will be between 1 and n! inclusive.

Example:
```example
Input: n = 3, k = 3
Output: "213"
```

## Solution
At first I use [_next_permutation_](https://en.cppreference.com/w/cpp/algorithm/next_permutation) to generate the permutations one by one. But this solution has a terrible time complexity **_O(n*k)_**. Here is another solution provided by [aleckerrigan](https://leetcode.com/problems/permutation-sequence/discuss/529025/C%2B%2B-Fully-commented-100100-solution). He found the regular pattern of the permutation, and solve the problem by the mathematical methods.
_**Time complexity: O(n)**_

## Summary
I'm stupid.
