# [66. Plus One](https://leetcode.com/problems/plus-one/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a <strong>non-empty</strong> array of digits&nbsp;representing a non-negative integer, plus one to the integer.</p>

<p>The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.</p>

<p>You may assume the integer does not contain any leading zero, except the number 0 itself.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> [1,2,3]
<strong>Output:</strong> [1,2,4]
<strong>Explanation:</strong> The array represents the integer 123.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> [4,3,2,1]
<strong>Output:</strong> [4,3,2,2]
<strong>Explanation:</strong> The array represents the integer 4321.
</pre></div></div>

## Solution
`"Plus one"` means that there is a carry at the least significant digit. Just like a carry adder, if the sum of them is equal to zero, propagate the carry to the next digit. Be care of the most significant digit, if the sum of that digit is equal to 10, then we need to insert a new digit 1 in front of it.

_**Time complexity: O(n)**_

## Summary
Too easy.
