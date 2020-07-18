# [79. Word Search](https://leetcode.com/problems/word-search/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a 2D board and a word, find if the word exists in the grid.</p>

<p>The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.</p>

<p><strong>Example:</strong></p>

<pre>board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "<strong>ABCCED</strong>", return <strong>true</strong>.
Given word = "<strong>SEE</strong>", return <strong>true</strong>.
Given word = "<strong>ABCB</strong>", return <strong>false</strong>.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>board</code>&nbsp;and <code>word</code> consists only of lowercase and uppercase English letters.</li>
	<li><code>1 &lt;= board.length &lt;= 200</code></li>
	<li><code>1 &lt;= board[i].length &lt;= 200</code></li>
	<li><code>1 &lt;= word.length &lt;= 10^3</code></li>
</ul>
</div></div>

## Solution
Just visit every element in the matrix, and find the starting point to check if there exist the target word. Every time you move to a new position, you need to expand the path in four direction(up, down, left and bottom). Be careful about the boundary of matrix, and make sure the same letter cell not be used more than once. So I assign a empty character `' '` to the visited letter. If the word is unmatched, the replaced letters must be recovered.

_**Time complexity: O(m*n*w)**_

## Summary
The time complexity of the recursive call in double for-loop is very high, so you had better try your best to simplify the function logic.
