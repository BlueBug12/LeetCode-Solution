# [58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/)

## Description

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

```example
Input: "Hello World"
Output: 5
```

## Solution
All we have to do is to find the first non-empty-space char, and record the length of that word.

I don't know why my solution is slower than [co1smos
](https://leetcode.com/problems/length-of-last-word/discuss/530644/C%3A-0ms-(100)-%2B-7.9MB-(100))'s. The time complexity of both solutions are _O(n)_.

_**Time complexity: O(n)**_

## Summary
You know why?
