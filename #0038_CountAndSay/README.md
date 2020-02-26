# [38. Count and Say](https://leetcode.com/problems/count-and-say/)

## Description

The count-and-say sequence is the sequence of integers with the first five terms as following:

```example
1.     1
2.     11
3.     21
4.     1211
5.     111221
```

`1` is read off as ``"one 1"`` or `11`.<br>
`11` is read off as ``"two 1s"`` or `21`.<br>
`21` is read off as ``"one 2, then one 1"`` or `1211`.<br>

Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.

Note: Each term of the sequence of integers will be represented as a string.

## Solution
Use recursive function.
```
if n==1
  return `"1"`.
else
  counting every repeated number.
```

## Summary
Is there any way to use mathematical methods to solve this problem?
