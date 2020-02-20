# [31. Next Permutation](https://leetcode.com/problems/next-permutation/)

## Description

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.

```example
1,2,3 -> 1,3,2
3,2,1 -> 1,2,3
1,1,5 -> 1,5,1
```

## Solution
Use function [_next_permutation_](https://en.cppreference.com/w/cpp/algorithm/next_permutation) in STL.
Here is the Possible implementation:
```cpp
template<class BidirIt>
bool next_permutation(BidirIt first, BidirIt last)
{
    if (first == last) return false;
    BidirIt i = last;
    if (first == --i) return false;

    while (true) {
        BidirIt i1, i2;

        i1 = i;
        if (*--i < *i1) {
            i2 = last;
            while (!(*i < *--i2))
                ;
            std::iter_swap(i, i2);
            std::reverse(i1, last);
            return true;
        }
        if (i == first) {
            std::reverse(first, last);
            return false;
        }
    }
```

Every iteration makes sure that the sublist is in their descended order. Once we find the smaller one, swap it with the smallest element in current sublist, which is always in the last place. After swapping, reverse the order of sublist, then we can get a next permutation.



_**Time complexity: O(N)**_

## Summary
I unintentionally found this function. Maybe next time we try to solve the problem, we should search the problem name in STL first.
