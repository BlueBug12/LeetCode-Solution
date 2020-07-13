# [73. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a <em>m</em> x <em>n</em> matrix, if an element is 0, set its entire row and column to 0. Do it <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank"><strong>in-place</strong></a>.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
[
&nbsp; [1,1,1],
&nbsp; [1,0,1],
&nbsp; [1,1,1]
]
<strong>Output:</strong>
[
&nbsp; [1,0,1],
&nbsp; [0,0,0],
&nbsp; [1,0,1]
]
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>
[
&nbsp; [0,1,2,0],
&nbsp; [3,4,5,2],
&nbsp; [1,3,1,5]
]
<strong>Output:</strong>
[
&nbsp; [0,0,0,0],
&nbsp; [0,4,5,0],
&nbsp; [0,3,1,0]
]
</pre>

<p><strong>Follow up:</strong></p>

<ul>
	<li>A straight forward solution using O(<em>m</em><em>n</em>) space is probably a bad idea.</li>
	<li>A simple improvement uses O(<em>m</em> + <em>n</em>) space, but still not the best solution.</li>
	<li>Could you devise a constant space solution?</li>
</ul>
</div></div>

## Solution
It's a trade-off about space and time. The hint of the question implies that there is a method that can take only _**O(1)**_ space complexity. To be honest, I didn't figure out who to run in _**O(1)**_ space complexity. I can just find a way that run in _**O(n+m)**_ space complexity. After taking a peek at the solution, finally I know how it works. It still needs m+n space, but directly uses the space in the matrix's first column and first row, which is exactly m+n space. So we just need to start traversing the matrix from the second row and column, if we encounter a `0`, record it at the coressponding first column and row. After that, we traverse the matrix again, and set `0` according to the first column and row.

_**Time complexity: O(n*m)**_

_**Space complexity: O(1)**_

## Summary
It's very tricky and still waste-time.
