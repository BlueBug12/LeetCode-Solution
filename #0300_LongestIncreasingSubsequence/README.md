# [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an integer array <code>nums</code>, return the length of the longest strictly increasing subsequence.</p>

<p>A <strong>subsequence</strong> is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, <code>[3,6,2,7]</code> is a subsequence of the array <code>[0,3,1,6,2,2,7]</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [10,9,2,5,3,7,101,18]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0,1,0,3,2,3]
<strong>Output:</strong> 4
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [7,7,7,7,7,7,7]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 2500</code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><b>Follow up:</b></p>

<ul>
	<li>Could you come up with the <code>O(n<sup>2</sup>)</code> solution?</li>
	<li>Could you improve it to <code>O(n log(n))</code> time complexity?</li>
</ul>
</div></div>

## Solution
Longest subsequence problem definitely has an optimal substructure. If we want to know the maximum length of `nums[n]`, we need to know the result of `nums[n-1]` before that. Because of the property of _strictly increasing_, any previous that is smaller than the current one can be linked to a legal subsequence. That's the key point. We have to enumerate each possible subsequence, and choose the one that has maximal length. As a result, we need a table `dp[n]`, `dp[i]` represent the maximal in the range of `nums[0...i]`, and we should fill the table from left to right, then record the maximum value at the same time. After that, we finally get the answer.
```cpp
dp[i] = max(dp[j]+1,dp[i]);//j<i
```

_**Time complexity: O(n^2)**_

## Summary
There is [another solution](https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/) that can run in _**O(nlogn)**_ time  complexity. It looks very simple, but the idea behind it is very ingenious, I think.
