# [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Write an efficient algorithm that searches for a value in an <em>m</em> x <em>n</em> matrix. This matrix has the following properties:</p>

<ul>
	<li>Integers in each row are sorted from left to right.</li>
	<li>The first integer of each row is greater than the last integer of the previous row.</li>
</ul>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
<strong>Output:</strong> false</pre>
</div></div>

## Solution
I use binary search to get the better performance. But the sorted elements are in matrix, so what we need to do is to transform the 1D-array index to the 2D-matrix index. It's not a difficult challenge.

_**Time complexity: O(log(n*m))**_

## Summary
Using `inline` to enhance the execution speed seems possible.
