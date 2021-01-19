# [279. Perfect Squares](https://leetcode.com/problems/perfect-squares/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an integer <code>n</code>, return <em>the least number of perfect square numbers that sum to</em> <code>n</code>.</p>

<p>A <strong>perfect square</strong> is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, <code>1</code>, <code>4</code>, <code>9</code>, and <code>16</code> are perfect squares while <code>3</code> and <code>11</code> are not.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 12
<strong>Output:</strong> 3
<strong>Explanation:</strong> 12 = 4 + 4 + 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 13
<strong>Output:</strong> 2
<strong>Explanation:</strong> 13 = 4 + 9.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>4</sup></code></li>
</ul>
</div></div>

## Solution
This another problem that can apply **DP**(_Dynamic Programming_) easily. Because we can only use _pefect square numbers_ to sum the target number, all the answers are consisted of a pefect square number with a previous calculation result. The optimal substructure is below:
```cpp
dp[m] = min(dp[m],1+dp[m-i*i]); // i*i <=m
```
Just keep least sum number for every number, and find the minimum combination to get the answer.

_**Time complexity: O(n*sqrt(n))**_

## Summary
Actually, there is [a method](https://leetcode.com/problems/perfect-squares/discuss/71532/O(sqrt(n))-about-0.034-ms-(and-0.018-ms)) that can run in  _**O(sqrt(n))**_. It is based on mathematical theorem.
