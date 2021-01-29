# [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are given <code>n</code> balloons, indexed from <code>0</code> to <code>n - 1</code>. Each balloon is painted with a number on it represented by an array <code>nums</code>. You are asked to burst all the balloons.</p>

<p>If you burst the <code>i<sup>th</sup></code> balloon, you will get <code>nums[i - 1] * nums[i] * nums[i + 1]</code> coins. If <code>i - 1</code> or <code>i + 1</code> goes out of bounds of the array, then treat it as if there is a balloon with a <code>1</code> painted on it.</p>

<p>Return <em>the maximum coins you can collect by bursting the balloons wisely</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [3,1,5,8]
<strong>Output:</strong> 167
<strong>Explanation:</strong>
nums = [3,1,5,8] --&gt; [3,5,8] --&gt; [3,8] --&gt; [8] --&gt; []
coins =  3*1*5    +   3*5*8   +  1*3*8  + 1*8*1 = 167</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,5]
<strong>Output:</strong> 10
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 500</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div></div>

## Solution
If you think of bursting a balloon as multiplying two adjacent matrices, then this problem is almost the same with the classical **DP** problem ----- _Matrix-chain multiplication_ . The only difference is that the _Matrix-chain multiplication_ problem wants to get the minimum value, but _burst balloons_ wants to get the maximum value(maximum coins). For example, if `nums = [3,1,5,8]`, then we can transform them into `5` matrices:
```
M1(1x3), M2(3x1), M3(1x5), M4(5x8), M5(8x1)
```
Notice that we add two `1` at the head and the tail respectively because we may burst the balloon at two ends.
Then you can see the corresponding matrix multiplication sequence as below:
```
nums = [3,1,5,8] --> [3,5,8] --> [3,8] --> [8] --> []
coins =  3*1*5    +   3*5*8   +  1*3*8  + 1*8*1 = 167
matrix: M1*M2*M3*M4*M5 => M1*(M2*M3)*M4*M5 => M1*((M2*M3)*M4)*M5 => (M1*((M2*M3)*M4))*M5 => ((M1*((M2*M3)*M4))*M5)
```
_**Time complexity: O(n^3)**_

## Summary
Keep in mind that learning by analogy is important.
