# [213. House Robber II](https://leetcode.com/problems/house-robber-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are <strong>arranged in a circle.</strong> That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and&nbsp;<b>it will automatically contact the police if two adjacent houses were broken into on the same night</b>.</p>

<p>Given a list of non-negative integers <code>nums</code> representing the amount of money of each house, return <em>the maximum amount of money you can rob tonight <strong>without alerting the police</strong></em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2,3,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3,1]
<strong>Output:</strong> 4
<strong>Explanation:</strong> Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 100</code></li>
	<li><code>0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div></div>

## Solution
Because the circular characteristic of this problem, the original **optimal substructure** doesn't exist in this case. For example, there is a list `[5,2,3,10]`, and we take `2` and `10` to get the maximum value 12. However, its subproblem `[5,2]` would take `5`, which is not belong to the solution group of it, to get the maximum value.
Let's rethink the difference of this problem and [198. House Robber](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230198_HouseRobber). The key point is that we can't take the head and tail elements at the same time. That is the only difference. As a result, we can just change the calculation range to avoid this thing happen. In other words, we do the calculation from `nums[1...n-1]` and `nums[2...n]` by using the same way in [198. House Robber](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230198_HouseRobber), then compare which value is larger, and we finally get the answer.
By the way, when the size of `nums` is 1, the above calculations would both do nothing. So we have to take this
special case carefully.

_**Time complexity: O(n)**_

## Summary
Adjust the thinking direction, we can still find the optimal substructure.
