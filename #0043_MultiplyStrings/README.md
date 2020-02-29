# [43. Multiply Strings](https://leetcode.com/problems/multiply-strings/)

## Description

Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

```example
Input: num1 = "2", num2 = "3"
Output: "6"
```

## Solution
I borrow the idea of multiplier from hardware design. Every element of string is regarded as registor that can store digit 0~9. All we have to do is multiply each digit and add the previous carry, then store the value of this digit and it's carry.

There's another concise solution provided by [Saravanakumar_dharmaraj
](https://leetcode.com/problems/multiply-strings/discuss/510501/C%2B%2B-solution-(less-lines-of-code)). He initialized a max length of answer in advance, so he didn't need to consider the problem of carry.

_**Time complexity: O(n*m)**_

## Summary
This is a problem about big-number calculation.
