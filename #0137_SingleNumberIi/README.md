# [137. Single Number II](https://leetcode.com/problems/single-number-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an integer array <code>nums</code> where&nbsp;every element appears <strong>three times</strong> except for one, which appears <strong>exactly once</strong>. <em>Find the single element and return it</em>.</p>

<p>You must&nbsp;implement a solution with a linear runtime complexity and use&nbsp;only constant&nbsp;extra space.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,3,2]
<strong>Output:</strong> 3
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0,1,0,1,0,1,99]
<strong>Output:</strong> 99
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li>Each element in <code>nums</code> appears exactly <strong>three times</strong> except for one element which appears <strong>once</strong>.</li>
</ul>
</div></div>

## Solution
The solution is very tricky, we should have the concept of bitwise operation to understand this. The central idea is basically the same as [137. Single Number II](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230136_SingleNumber). The difference is that we need to distinguish between theose numbers that apear one time and those appear more than once. So we need two variables to record the two sets(`set1` and `set2`) mentioned above, and using bitwise operation to do the following condition judgment:
```
if the number hasn't been in the set1 and also not in set2
    add to set1
else
    remove from the set1

if the number hasn't been in the set2 and also not in set1
    add to set2
else
    remove from the set2
```
After passing all the number in the array, the number in `set1` is the answer we want --- the number that only apears once.

_**Time complexity: O(n)**_

## Summary
The solution is referred to [againest1](https://leetcode.com/problems/single-number-ii/discuss/43294/Challenge-me-thx). It is an impressive solution that inspired me a lot. I should be more familiar with every useful operation in the programming language and be open-minded.
