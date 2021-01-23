# [417. Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an <code>m x n</code> matrix of non-negative integers representing the height of each unit cell in a continent, the "Pacific ocean" touches the left and top edges of the matrix and the "Atlantic ocean" touches the right and bottom edges.</p>

<p>Water can only flow in four directions (up, down, left, or right) from a cell to another one with height equal or lower.</p>

<p>Find the list of grid coordinates where water can flow to both the Pacific and Atlantic ocean.</p>

<p><b>Note:</b></p>

<ol>
	<li>The order of returned grid coordinates does not matter.</li>
	<li>Both <i>m</i> and <i>n</i> are less than 150.</li>
</ol>

<p>&nbsp;</p>

<p><b>Example:</b></p>

<pre>Given the following 5x5 matrix:

  Pacific ~   ~   ~   ~   ~
       ~  1   2   2   3  (5) *
       ~  3   2   3  (4) (4) *
       ~  2   4  (5)  3   1  *
       ~ (6) (7)  1   4   5  *
       ~ (5)  1   1   2   4  *
          *   *   *   *   * Atlantic

Return:

[[0, 4], [1, 3], [1, 4], [2, 2], [3, 0], [3, 1], [4, 0]] (positions with parentheses in above matrix).
</pre>

<p>&nbsp;</p>
</div></div>

## Solution
This problem can be solved by the **DFS**(_Depth First Search_) or **BFS**(_Breadth First Search_) algorithm, and I choose DFS for simplicity. The key idea is to search any possible **non-decreasing** path from the top-left border(for the _Pacific_ case) and from the bottom-right border(for the _Altlantic_ case). After spanning every paths from these two cases, the **overlapping coordinates** of them are the answer of this question. Notice that it is required a table to record which coordinate has been traversed. If it has, we won't do DFS at that coordinate again.

_**Time complexity: O(n*m)**_

## Summary
It's not a difficult problem, but it's annoying to deal with all the corner cases for me. And I think it is not easy to write a clean code for this problem.
