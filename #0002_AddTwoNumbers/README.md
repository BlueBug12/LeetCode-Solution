# [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are given two <b>non-empty</b> linked lists representing two non-negative integers. The digits are stored in <b>reverse order</b> and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.</p>

<p>You may assume the two numbers do not contain any leading zero, except the number 0 itself.</p>

<p><b>Example:</b></p>

<pre><b>Input:</b> (2 -&gt; 4 -&gt; 3) + (5 -&gt; 6 -&gt; 4)
<b>Output:</b> 7 -&gt; 0 -&gt; 8
<b>Explanation:</b> 342 + 465 = 807.
</pre>
</div></div>

## Solution
I figure out two solution to solve the problem. One is to creat a new list to store the summation. The other is to store the summation in place. The first method can be writen in elegance, but it wasted time and space. The second one seems much more complicated, but it's more efficient actually.

_**Time complexity: O(n)**_

## Summary
This question can be seen as `big number` calculation. We use many variables to represent each digit.
