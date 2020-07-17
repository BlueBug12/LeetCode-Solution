# [78. Subsets](https://leetcode.com/problems/subsets/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a set of <strong>distinct</strong> integers, <em>nums</em>, return all possible subsets (the power set).</p>

<p><strong>Note:</strong> The solution set must not contain duplicate subsets.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong>
[
  [3],
&nbsp; [1],
&nbsp; [2],
&nbsp; [1,2,3],
&nbsp; [1,3],
&nbsp; [2,3],
&nbsp; [1,2],
&nbsp; []
]</pre>
</div></div>

## Solution
Use the same idea in [77. Combibations](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230077_Combinations). The only difference is every time when the number is pushed into vector, we need to push this vector into the answer. So the time complexity becomes _**O(2^n)**_ instead of _**O(Combibation(n,k))**_.

_**Time complexity: O(2^n)**_

## Summary
The answer itself is 2^n degree, so I think this is the best time complexity to solve the problem.
