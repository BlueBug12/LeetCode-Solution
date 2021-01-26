# [136. Single Number](https://leetcode.com/problems/single-number/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a <strong>non-empty</strong>&nbsp;array of integers <code>nums</code>, every element appears <em>twice</em> except for one. Find that single one.</p>

<p><strong>Follow up:</strong>&nbsp;Could you implement a solution with a linear runtime complexity and without using extra memory?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,1]
<strong>Output:</strong> 1
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [4,1,2,1,2]
<strong>Output:</strong> 4
</pre><p><strong>Example 3:</strong></p>
<pre><strong>Input:</strong> nums = [1]
<strong>Output:</strong> 1
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-3 * 10<sup>4</sup> &lt;= nums[i] &lt;= 3 * 10<sup>4</sup></code></li>
	<li>Each element in the array appears twice except for one element which appears only once.</li>
</ul>
</div></div>

## Solution
Notice the constraints:
> Each element in the array appears twice except for one element which appears only once.

The key idea is to cancel the number that has been seen before, so that the only remainning number is the answer. But how to do the cancellation in _**O(n)**_? The method is very tricky. In the view of bits, there exists an operation call **XOR(^)**. For example
```cpp
101 ^ 011 = 100
```
If the corresponding bit is different, then it becomes `1`, otherwise, it becomes `0`, in other words, any number XOR to itself would equal to `0` because each bit is the same. Moreover, the XOR operation follows the _**commutative law**_, which means that
```cpp
a ^ b = b ^ a
```
Finally, take a sequence for example, you'll know how it works:
```cpp
nums = [4,1,2,1,2]
  4 ^ 1 ^ 2 ^ 1 ^2
= 1 ^ 1 ^ 2 ^ 2 ^ 4 //commutative law
= 0 ^ 0 ^ 4 // any numebr XOR itself equals to 0
= 4
```
_**Time complexity: O(n)**_

## Summary
Very tricky.
