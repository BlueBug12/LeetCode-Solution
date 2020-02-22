# [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

## Description

Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

```example
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
```

## Solution
There are two ways that I figure out.
1. **Solution 1**: </br>
Using the function [_lower_bound_](https://en.cppreference.com/w/cpp/algorithm/lower_bound) and [_upper_bound_](https://en.cppreference.com/w/cpp/algorithm/upper_bound) which are defined in \<algorithm\>.
The code below is the opssible implementation of _lower_bound_ :
>```c++
template<class ForwardIt, class T>
ForwardIt lower_bound(ForwardIt first, ForwardIt last, const T& value)
{
    ForwardIt it;
    typename std::iterator_traits<ForwardIt>::difference_type count, step;
    count = std::distance(first, last);
    while (count > 0) {
        it = first;
        step = count / 2;
        std::advance(it, step);
        if (*it < value) {
            first = ++it;
            count -= step + 1;
        }
        else
            count = step;
    }
    return first;
}
```
>And the _upper_bound_ is almost the same. Be careful about what each function return.
* **_lower_bound_**: Return Iterator pointing to the first element that is `not less than value`, or last if no such element is found.
* **_upper_bound_**: Return iterator pointing to the first element that is `greater than value`, or last if no such element is found.
>_**Time complexity: O(logN)**_


2. **Solution 2**:</br>
Using binary search to find any position of the target. Once we find the target, expand it to the left and also the right until there is no target value in the vector.
>_**Time complexity: O(N)**_

## Summary
Though it looks like the first solution is faster than the second, the second performe faster in fact. In my point, most of the input data are very small, so the advantage the solution 1 is not present well. And another factor is the length of duplicated target. If there are few target values, the linear expanding time doesn't dominate the time complexity. Which method is better depends on the characteristics of input data.
