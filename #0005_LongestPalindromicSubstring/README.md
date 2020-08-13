# [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a string <strong>s</strong>, find the longest palindromic substring in <strong>s</strong>. You may assume that the maximum length of <strong>s</strong> is 1000.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> "babad"
<strong>Output:</strong> "bab"
<strong>Note:</strong> "aba" is also a valid answer.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> "cbbd"
<strong>Output:</strong> "bb"
</pre>
</div></div>

## Solution
The most straightforward method is to pick each element as the center, and try to expand its palindromic from both left and right as long as possible. Futhermore, the length of the palindromic substring may be odd or even, so we have to start expand from one positon(for odd) and two positions(for even) respectively.
However, there is a magical algorithm that only takes _**O(n)**_ time complexity. It is called _"Manacher’s Algorithm"_. You can see the detailed explaination at this [website](https://medium.com/hoskiss-stand/manacher-299cf75db97e).

_**Time complexity:**_
_Brute force_: _**O(n^2)**_ (java & python)
_Manacher’s Algorithm_: _**O(n)**_ (c++)

## Summary
No best, only better.
