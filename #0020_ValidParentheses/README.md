# [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

## Description

Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

```example
Input: "()"
Output: true
```

## Solution
Because the characteristic of LIFO, I use the data structure of stack to solve the problem. The key ideas are:
1. if we find a pair of parentheses, pop them and find the next one.
2. Until end, if the stack is not empty, which means that there have some parentheses that didn't be matched. It's invalid.
3. It's self-evident that if the length of input string is an odd number, it must be invalid.


## Summary
I think there should be a more elegant way by using recursive function. But somehow I just can't figure out. By the way, if using map to take the place of switch case, it can be faster  but waste a little more memory.
