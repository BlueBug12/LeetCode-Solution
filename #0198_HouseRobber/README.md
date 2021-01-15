# [198. House Robber](https://leetcode.com/problems/house-robber/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and <b>it will automatically contact the police if two adjacent houses were broken into on the same night</b>.</p>

<p>Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight <b>without alerting the police</b>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,1]
<strong>Output:</strong> 4
<strong>Explanation:</strong> Rob house 1 (money = 1) and then rob house 3 (money = 3).
&nbsp;            Total amount you can rob = 1 + 3 = 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2,7,9,3,1]
<strong>Output:</strong> 12
<strong>Explanation:</strong> Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
&nbsp;            Total amount you can rob = 2 + 9 + 1 = 12.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 400</code></li>
</ul>
</div></div>

## Solution
If we want to know the maximum money we can rob at house _n_, we need to calculate the maximum money at house _n-2_ because we can't continuous rob two adjacent houses. So, we can define a recursive solution:
```cpp
//m[i] is the maximum amount of money we can rob when we at the i_th house
//h[i] is the amount of money in the i_th house
m[i] = max(m[i-1] , m[i-2]+h[i]);
```
Actually, array `h` is equal to the given vector `nums`, and the array `m` is what we need to calculate and memoize. Notice that every iteration we only need the penultimate and previous result, as a result, we just need two variable to record each calculation result. In other words, it only requires _**O(1)**_ space to solve the problem.

_**Time complexity: O(n)**_
## Summary
I think the recursive formula is a little bit like **Fibonacci sequence**, which is:
```cpp
f(n) = f(n-1) + f(n-2), n>1
```
Hence, the Fibonacci number can also be solved in _**O(n)**_ time and _**O(1)**_ space.
