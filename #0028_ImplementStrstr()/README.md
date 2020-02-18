# [28. Implement strStr()](https://leetcode.com/problems/implement-strstr/)

## Description

Implement strStr().

```example
Input: haystack = "hello", needle = "ll"
Output: 2
```

## Solution
Use [_KMP_](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm) algorithm to implement string searching, but we just need to find the first one if it exists. Or you can make your life easier, using [_find_](https://en.cppreference.com/w/cpp/string/basic_string/find)  function.

_**Time complexity: O(M+N)**_

## Summary
There is a faster method: [_Boyer¡VMoore string-search algorithm_](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm). The best case of it's matching time is £[(n/m). Maybe next time I should try this way.
