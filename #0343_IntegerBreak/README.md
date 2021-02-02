# [343. Integer Break](https://leetcode.com/problems/integer-break/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a positive integer <i>n</i>, break it into the sum of <b>at least</b> two positive integers and maximize the product of those integers. Return the maximum product you can get.</p>

<p><strong>Example 1:</strong></p>

<div>
<pre><strong>Input: </strong><span id="example-input-1-1">2</span>
<strong>Output: </strong><span id="example-output-1">1</span>
<strong>Explanation: </strong>2 = 1 + 1, 1 * 1 = 1.</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong><span id="example-input-2-1">10</span>
<strong>Output: </strong><span id="example-output-2">36</span>
<strong>Explanation: </strong>10 = 3 + 3 + 4, 3 *&nbsp;3 *&nbsp;4 = 36.</pre>

<p><b>Note</b>: You may assume that <i>n</i> is not less than 2 and not larger than 58.</p>
</div>
</div></div></div>

## Solution
When we want to calculate maximum product of `n`, the **subproblem** of it is `1`,`2`,`3`,`4`... `n-1`. You can see the there exists **overlapping subproblems** exactly. So we use **DP** again. Calculate the maximum product in bottom up approach, and store the value in a table. If the maximum product is less than the number itself, then we choose to store the number rather then the calculated result in order to get the correctly maximum product at the greater number(it means we don't break the number further). Notice that we only need to try the combination from `(1,n-1)` to `(n/2,n/2)`(for even `n`) or to `(n/2,n/2+1)`(for odd `n`) because the others combinations is duplicated to the previous one.

_**Time complexity: O(n^2)**_

## Summary

Another mathematical solution in [O(n)](https://leetcode.com/problems/integer-break/discuss/80689/A-simple-explanation-of-the-math-part-and-a-O(n)-solution) or even [log(n)](https://leetcode.com/problems/integer-break/discuss/80785/O(log(n))-Time-solution-with-explanation).
