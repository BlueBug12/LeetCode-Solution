# [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)

## Description
<div><p>Find the <strong>k</strong>th largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> <code>[3,2,1,5,6,4] </code>and k = 2
<strong>Output:</strong> 5
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> <code>[3,2,3,1,2,4,5,5,6] </code>and k = 4
<strong>Output:</strong> 4</pre>

<p><strong>Note: </strong><br>
You may assume k is always valid, 1 ≤ k ≤ array's length.</p>
</div></div>

## Solution
I choose to implement a max heap to solve the problem for the purpose of practicing even though this is not the fastest method. First, build a max heap in place. Second, pop `k-th` and record it. That's all.

_**Time complexity: O(nlogn)**_
## Summary
There are many c++ build in functions like `sort()`,`nth_element()`,`partial_sort()` can solve this problem easily.
