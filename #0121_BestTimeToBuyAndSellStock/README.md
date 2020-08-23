# [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Say you have an array for which the <em>i</em><sup>th</sup> element is the price of a given stock on day <em>i</em>.</p>

<p>If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.</p>

<p>Note that you cannot sell a stock before you buy one.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> [7,1,5,3,6,4]
<strong>Output:</strong> 5
<strong>Explanation:</strong> Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
&nbsp;            Not 7-1 = 6, as selling price needs to be larger than buying price.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> [7,6,4,3,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> In this case, no transaction is done, i.e. max profit = 0.
</pre>
</div></div>

## Solution
Let me tell you a secret about making money at the stock market --- _buy low and sell high_. As a result, if the current price of the stock is higher than the price you buy, you can make some profit. When the current price of the stock is lower than the price you buy, you can make this price as your new purchase price because it means that you have a wider profit margin. The total actions above can be done in _**O(n)**_.

_**Time complexity: O(n)**_

## Summary
When you see the past, you may find that making money is super easy. But that is in the view of God. In the real world, the major problem is, you never know which price is the lowest one, nor can you even predict the price of the stock in the next moment is lower or higher in 100% accuracy.
