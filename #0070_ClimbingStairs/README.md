# [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are climbing a stair case. It takes <em>n</em> steps to reach to the top.</p>

<p>Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 45</code></li>
</ul>
</div></div>

## Solution
If you write down the number sequence of this question, it's easy to find that this is a Fibonacci sequence. Once you notice this key point, the remaining work is just a piece of cake.
```text
Fibonacci sequence: 1(1 step), 2(2 steps), 3(3 steps), 5(4 steps), 8(5 steps), 13.(6 steps).....
```

_**Time complexity: O(n)**_

## Summary
Actually, there is a faster solution that only takes _**O(1)**_ because there exists a closed-form approximation. You can look over this method in [wiki](https://en.wikipedia.org/wiki/Fibonacci_number#Computation_by_rounding) or just see the example solution from [this guy](https://leetcode.com/problems/climbing-stairs/discuss/727829/Single-line-O(1)-solution-in-C%2B%2B).
