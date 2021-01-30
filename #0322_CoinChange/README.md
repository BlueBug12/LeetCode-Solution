# [322. Coin Change](https://leetcode.com/problems/coin-change/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are given coins of different denominations and a total amount of money <i>amount</i>. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return <code>-1</code>.</p>

<p>You may assume that you have an infinite number of each kind of coin.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> coins = [1,2,5], amount = 11
<strong>Output:</strong> 3
<strong>Explanation:</strong> 11 = 5 + 5 + 1
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> coins = [2], amount = 3
<strong>Output:</strong> -1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> coins = [1], amount = 0
<strong>Output:</strong> 0
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> coins = [1], amount = 1
<strong>Output:</strong> 1
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> coins = [1], amount = 2
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= coins.length &lt;= 12</code></li>
	<li><code>1 &lt;= coins[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li><code>0 &lt;= amount &lt;= 10<sup>4</sup></code></li>
</ul>
</div></div>

## Solution
At first, my intuitive thought is applying **DFS** to find the solution. However, I found that it may exist more than one combination to achieve the target number. Using DFS is like brute-force method, and it will take exponential time to calculate the minimum amount of money. As a result, I choose **DP**(_Dynamic Programming_) to solve this problem because it truely has a optimal substructure. For example, there is a number `n` equal to `a+b`. If we find the minimum amount of coin changing to `n`, then it must be build by the minimum amount of coin changing to `a` and `b`. But `a` and `b` can be any combination that can sum up to `n`, to find the minimal one, we should try to use each number in `coins`. Once all possible valid combination has been tried, then it guarantees the solution is minimum.

_**Time complexity: O(amount*coins.size())**_

## Summary
It takes a long time to find all the possible combinations. If the size of `coins` is very large, it'll still cost a lot of time even though the **DP** method is efficient.
