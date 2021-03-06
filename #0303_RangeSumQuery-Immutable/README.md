# [303. Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)
## Description
<div class="content__u3I1 question-content__JfgR"><div><p>Given an integer array <code>nums</code>, find the sum of the elements between indices <code>i</code> and <code>j</code> <code>(i ≤ j)</code>, inclusive.</p>

<p>Implement the&nbsp;<code>NumArray</code> class:</p>

<ul>
	<li><code>NumArray(int[] nums)</code> Initializes the object with the integer array <code>nums</code>.</li>
	<li><code>int sumRange(int i, int j)</code> Return the sum of the elements of the <code>nums</code> array in the range <code>[i, j]</code> inclusive (i.e., <code>sum(nums[i], nums[i + 1], ... , nums[j])</code>)</li>
</ul>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input</strong>
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
<strong>Output</strong>
[null, 1, -1, -3]

<strong>Explanation</strong>
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return 1 ((-2) + 0 + 3)
numArray.sumRange(2, 5); // return -1 (3 + (-5) + 2 + (-1))
numArray.sumRange(0, 5); // return -3 ((-2) + 0 + 3 + (-5) + 2 + (-1))
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>5</sup>&nbsp;&lt;= nums[i] &lt;=&nbsp;10<sup>5</sup></code></li>
	<li><code>0 &lt;= i &lt;= j &lt; nums.length</code></li>
	<li>At most <code>10<sup>4</sup></code> calls will be made to <code>sumRange</code>.</li>
</ul>
</div></div>

## Solution
Construct a table `dp[0...n]`, and `dp[i]` is the summation from `nums[0]` to `nums[i-1]`(i>0,`dp[0]`=0). After that, we can calculate summation in any rang in _**O(1)**_ time complexity because
```cpp
rangeSum(i,j) = dp[j+1] - dp[i]
```
Most of the time is spent on construct the table.
_**Time complexity: O(n)**_

## Summary
I think this problem demonstrates the core idea of _DP_(_dynamic programming_) very well.
