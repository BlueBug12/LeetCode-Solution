# [67. Add Binary](https://leetcode.com/problems/add-binary/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given two binary strings, return their sum (also a binary string).</p>

<p>The input strings are both <strong>non-empty</strong> and contains only characters <code>1</code> or&nbsp;<code>0</code>.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> a = "11", b = "1"
<strong>Output:</strong> "100"</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> a = "1010", b = "1011"
<strong>Output:</strong> "10101"</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>Each string consists only of <code>'0'</code> or <code>'1'</code> characters.</li>
	<li><code>1 &lt;= a.length, b.length &lt;= 10^4</code></li>
	<li>Each string is either <code>"0"</code> or doesn't contain any leading zero.</li>
</ul>
</div></div>

## Solution
This question looks simple, but it is a little bit annoying. Because the most significant bit is stored in the lowest memory adress ([big endian](https://en.wikipedia.org/wiki/Endianness)), we need to calculated the value bit by bit from the end to the begin of the string. However, the length of two string may not equal, the lagest(least significant bit) index may be different, too. There are two ways to solve the problem: the first is to reverse the string before we starting calculation, therefore, we change the architecture of string from the `big endian` to `little endian`, which is easier to do the calculation. But it takes _**O(n+m)**_ to reverse both string. So I choose the second way, calculating the "offset" first, and subtract this offset to get the correct index of the shorter string.

_**Time complexity: O(max(m,n))**_

## Summary
Review the Endianness:
![endianness](./img/endianness.png)
