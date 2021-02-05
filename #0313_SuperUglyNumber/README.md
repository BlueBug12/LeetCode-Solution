# [313. Super Ugly Number](https://leetcode.com/problems/super-ugly-number/)

## Description
<div class="content__u3I1 question-content__JfgR"><div><p>Write a program to find the <code>n<sup>th</sup></code> super ugly number.</p>

<p>Super ugly numbers are positive numbers whose all prime factors are in the given prime list <code>primes</code> of size <code>k</code>.</p>

<p><b>Example:</b></p>

<pre><b>Input:</b> n = 12, <code>primes</code> = <code>[2,7,13,19]</code>
<b>Output:</b> 32
<strong>Explanation: </strong><code>[1,2,4,7,8,13,14,16,19,26,28,32] </code>is the sequence of the first 12
             super ugly numbers given <code>primes</code> = <code>[2,7,13,19]</code> of size 4.</pre>

<p><b>Note:</b></p>

<ul>
	<li><code>1</code> is a super ugly number for any given <code>primes</code>.</li>
	<li>The given numbers in <code>primes</code> are in ascending order.</li>
	<li>0 &lt; <code>k</code> ≤ 100, 0 &lt; <code>n</code> ≤ 10<sup>6</sup>, 0 &lt; <code>primes[i]</code> &lt; 1000.</li>
	<li>The n<sup>th</sup> super ugly number is guaranteed to fit in a 32-bit signed integer.</li>
</ul>
</div></div>

## Solution
I solve this problem based on the same idea at [264. Ugly Number II](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230264_UglyNumberIi). The only difference is that the _prime factors_ are not just `2,3` and `5`, but some given numbers(still be _prime factors_). At first, I use two `for loops` to get the answer in _**O(nk)**_. Afterward, it comes to mind that I can use a `heap` to take the place of inner `for loop`. Actually the inner `for loop` calculate same value many times once the index of the `prime factor` doesn't change. So, why not just store the calculated result, and always get the smallest one from the `heap`? It means that the `heap` will always keep `k` elements, and we need to take the minimal one and `push` a new candicate during every iteration.
It is a little bit tricky that I use one `int variable` to represet two numbers. Due to the constrain that
* 0 < `primes[i]` < 1000
* 0 < `n` <= 10^6

We can split a `int` variable into two parts:
the **rightmost** 3 digits represent `primes[n]`, and the others represent the index of the previous ugly number multiplied by this prime factor.(max value of `int` is equal to `2,147,483,647`)
Finally, I choose `priority_queue` to implement similiar data structure `heap`. The key is certainly the candicate of next ugly number. And the value is the compound number a mentioned before. It takes `log(k)` to do the `push()` or `pop()` operation, and it only takes _**O(1)**_ to get the element that has minimal key value. Notice that we shouldn't push same key into the `priority_queue`, so we should check whether or not there exists a duplicated number before every `push` operation.

_**Time complexity: O(nlog(k))**_
## Summary
`priority queue` is basically a more general    `heap` in the opinion, the more importent thing is that we can directly use it from the `c++ STL` instead of implement it by myself.
