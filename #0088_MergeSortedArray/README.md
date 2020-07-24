# [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given two sorted integer arrays <em>nums1</em> and <em>nums2</em>, merge <em>nums2</em> into <em>nums1</em> as one sorted array.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>The number of elements initialized in <em>nums1</em> and <em>nums2</em> are <em>m</em> and <em>n</em> respectively.</li>
	<li>You may assume that <em>nums1</em> has enough space (size that is&nbsp;<strong>equal</strong> to <em>m</em> + <em>n</em>) to hold additional elements from <em>nums2</em>.</li>
</ul>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong>
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

<strong>Output:</strong>&nbsp;[1,2,2,3,5,6]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-10^9 &lt;= nums1[i], nums2[i] &lt;= 10^9</code></li>
	<li><code>nums1.length == m + n</code></li>
	<li><code>nums2.length == n</code></li>
</ul>
</div></div>

## Solution
Usually, when we want to merge two sorted vectors, we need `m+n` additional space to store the sorted elements. But in this special case, the `nums1` already has `m+n` space. So what we need to do is to make good use of the rest of space, and for convenience, we pass the vector from its tail. As a result, we can merge these two vectors in _**O(n)**_ time.

_**Time complexity: O(n)**_

## Summary
We only need `m+2n` to complete the whole process of the merging two vectors.
