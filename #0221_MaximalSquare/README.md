# [221. Maximal Square](https://leetcode.com/problems/maximal-square/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an <code>m x n</code> binary <code>matrix</code> filled with <code>0</code>'s and <code>1</code>'s, <em>find the largest square containing only</em> <code>1</code>'s <em>and return its area</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/max1grid.jpg" style="width: 400px; height: 319px;">
<pre><strong>Input:</strong> matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/11/26/max2grid.jpg" style="width: 165px; height: 165px;">
<pre><strong>Input:</strong> matrix = [["0","1"],["1","0"]]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> matrix = [["0"]]
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == matrix.length</code></li>
	<li><code>n == matrix[i].length</code></li>
	<li><code>1 &lt;= m, n &lt;= 300</code></li>
	<li><code>matrix[i][j]</code> is <code>'0'</code> or <code>'1'</code>.</li>
</ul>
</div></div>

## Solution
This also a great problem to demonstrate how poweful **DP**(_Dynamic Programming_) is. First, Given a point `matrix[i][j]`, the problem is to find the maximal square containing only 1's in the range of `matrix[0...i][0...j]`. Second, the optimal subproblem is that given any `0 <= x < i` and `0 <= y < j`, we want to find the maximal square containing only 1's in the range of `matrix[0...x][0...y]`. If we know every maximal value at `matrix[x][y]`, we can combine them to get the maximal value at `matrix[i][j]`.
To memoize the results of calculation, a table `dp[n][m]` is needed. `n` is the row number of the matrix, and `m` is the column number of the matrix. Each value in `dp[i][j]` represents the maximal value in the range of 0...i and 0...j in the matrix. And here comes the key question--- _"How do we know the value in `dp[i][j]` depending on the prevous result?"_. Actually, there are only three elements we need to consider: `dp[i][j-1]`,`dp[i-1][j]` and `dp[i-1][j-1]`. The formula is below:
```cpp
dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1
```
That the most essential idea to this problem. Fill up `dp`, then we get the answer.

_**Time complexity: O(n*m)**_

## Summary
I'm beat by this problem. The code and the above comments are mainly referred to [Jianchao Li](https://leetcode.com/jianchao-li/)'s solution on [leetcode discuss](https://leetcode.com/problems/maximal-square/discuss/61803/C%2B%2B-space-optimized-DP). Thanks to him, I learn a lot from his explaination.
