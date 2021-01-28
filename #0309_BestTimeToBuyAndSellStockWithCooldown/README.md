# [309. Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Say you have an array for which the <i>i</i><sup>th</sup> element is the price of a given stock on day <i>i</i>.</p>

<p>Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times) with the following restrictions:</p>

<ul>
	<li>You may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).</li>
	<li>After you sell your stock, you cannot buy stock on next day. (ie, cooldown 1 day)</li>
</ul>

<p><b>Example:</b></p>

<pre><strong>Input:</strong> [1,2,3,0,2]
<strong>Output: </strong>3
<strong>Explanation:</strong> transactions = [buy, sell, cooldown, buy, sell]
</pre></div></div>

## Solution
I think this type of problem is similar to **Rod Cutting problem**, a classical dynamic programming problem. The major difference is, we need to `cooldown` for one day after each selling. It doesn't change the nature of the problem, however. We still can find the _optimal substructure_ that represets the characteristic of it. First, we need a table `dp` which length is `prices.size()+2` because it requires some "gaps" corresponding to `cooldown`. The `dp[i+2]` is the maximum profit we can make from `prices[0...i]`. Then, here is the optimal substructure:
```cpp
// 0 <= i < prices.size()
// 0 <= j < i
dp[i+2] = max(dp[i+1],dp[j]+prices.at(i)-prices.at(j));
```
`dp[i+1]` means we must `cooldown` this day, so just take the maximum profit at yesterday. `dp[j]+prices.at(i)-prices.at(j)` means we do one trading operation(buy then sell) and add this value to the result of previous days(**earlier than yesterday to avoid cooldown**) .

_**Time complexity: O(n^2)**_

## Summary
Actually, there exists a _state-machine-based_ solution that only needs _**O(1)**_ extra space and runs in _**O(n)**_. Just see the explaination from [disscussion at leetcode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/discuss/75928/Share-my-DP-solution-(By-State-Machine-Thinking)).
