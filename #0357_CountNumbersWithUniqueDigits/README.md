# [357. Count Numbers with Unique Digits](https://leetcode.com/problems/count-numbers-with-unique-digits/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a <b>non-negative</b> integer n, count all numbers with unique digits, x, where 0 ≤ x &lt; 10<sup>n</sup>.</p>

<div>
<p><strong>Example:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">2</span>
<strong>Output: </strong><span id="example-output-1">91
<strong>Explanation: </strong></span>The answer should be the total numbers in the range of 0 ≤ x &lt; 100,
&nbsp;            excluding <code>11,22,33,44,55,66,77,88,99</code>
</pre>
</div>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 8</code></li>
</ul>
</div></div>

## Solution
It's actually a math problem about permutation. We can consider the problem as two parts. One is exactly a permutation with `n` numbers. The other includes the numbers with at least **two zeros**(numbers with one zero are included by the first part). You can see that there exists a relation between each number `n`.
```
n=1: 10 + 0 = 10
n=2: 10*9 + 1*1(00) = 91
n=3: 10*9*8 + 9*2(00x,x!=0) + 1*1(00) = 739
n=4: 10*9*8*7 + 9*8*3(00xy,0x0y,0xy0, x,y!=0) + 9*2(00x,x!=0) + 1*1(00) = 5275
...
```
Notice that when `n > 10`, the _unique number_ would not increase anymore because all the digits are used, there must exist one or more duplicated digits. As a result, we only need to calculate the number when `0 <= n <= 10`.

_**Time complexity:**_:
when n <= 10: _**O(n)**_
when n > 10 : _**O(1)**_

## Summary
In this case, it's much more efficient to build a lookup table because the range of `n` with different result is limited.
