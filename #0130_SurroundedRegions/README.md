# [130. Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a 2D board containing <code>'X'</code> and <code>'O'</code> (<strong>the letter O</strong>), capture all regions surrounded by <code>'X'</code>.</p>

<p>A region is captured by flipping all <code>'O'</code>s into <code>'X'</code>s in that surrounded region.</p>

<p><strong>Example:</strong></p>

<pre>X X X X
X O O X
X X O X
X O X X
</pre>

<p>After running your function, the board should be:</p>

<pre>X X X X
X X X X
X X X X
X O X X
</pre>

<p><strong>Explanation:</strong></p>

<p>Surrounded regions shouldn't be on the border, which means that any <code>'O'</code>&nbsp;on the border of the board are not flipped to <code>'X'</code>. Any <code>'O'</code>&nbsp;that is not on the border and it is not connected to an <code>'O'</code>&nbsp;on the border will be flipped to <code>'X'</code>. Two cells are connected if they are adjacent cells connected horizontally or vertically.</p>
</div></div>

## Solution
Obviously, whether or not the region is `'O'` or `'X'` depends on the borders. As a result, we just need to start doing `DFS` at each border, and make sure each passing region flipped to `'O'` when the connected border is also `'O'`. Notice that I flip `'X'` to `'O'` instead of the reverse, so actually it requires a **n*m** additional space which initial value is `'X'`. After that, all we need to do is to find every `DFS` path and flip the region if necessay.

_**Time complexity: O(n*m)**_

## Summary
This problem can be solved without additional space, but it would be a little bit complicated and easy to read.
