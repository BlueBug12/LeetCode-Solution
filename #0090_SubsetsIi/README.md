# [90. Subsets II](https://leetcode.com/problems/subsets-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a collection of integers that might contain duplicates, <strong><em>nums</em></strong>, return all possible subsets (the power set).</p>

<p><strong>Note:</strong> The solution set must not contain duplicate subsets.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> [1,2,2]
<strong>Output:</strong>
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]
</pre>
</div></div>

## Solution
Because we have to avoid duplicated elements, so the input numbers should be sorted. Then we can use recursive call to expand all possible subsets. Notice that the `nums` array is sorted, so we can avoid to record the duplicated subsets.

_**Time complexity: O(2^n)**_

## Summary
It's just like the [78. Subsets](https://leetcode.com/problems/subsets/) problem with the consideration of duplication.
