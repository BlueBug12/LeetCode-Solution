# [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an unsorted array of integers, find the length of the longest consecutive elements sequence.</p>

<p>Your algorithm should run in O(<em>n</em>) complexity.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong>&nbsp;[100, 4, 200, 1, 3, 2]
<strong>Output:</strong> 4
<strong>Explanation:</strong> The longest consecutive elements sequence is <code>[1, 2, 3, 4]</code>. Therefore its length is 4.
</pre>
</div></div>

## Solution
The time complexity of this question is restricted to _**O(n)**_, which implies that we need some kinds of data structure that can access the elements in _**O(1)**_. Here we use `unordered_set` to deal with this problem. It takes _**O(n)**_ time complexity to transform `vector` into `unordered_set`. We also need another for loop to pass the `vector` again in order to find the consecutive sequence. It may seem that the inner while loop cause the time complexity become _**O(n^2)**_, but the `if` condition makes sure that we won't count the same consecutive sequence more than once. The total number of counting would equal to the length of the input vector.

_**Time complexity: O(n)**_

## Summary
I think the `if` condition is the key point of this question.
