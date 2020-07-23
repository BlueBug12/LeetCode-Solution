# [86. Partition List](https://leetcode.com/problems/partition-list/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a linked list and a value <em>x</em>, partition it such that all nodes less than <em>x</em> come before nodes greater than or equal to <em>x</em>.</p>

<p>You should preserve the original relative order of the nodes in each of the two partitions.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> head = 1-&gt;4-&gt;3-&gt;2-&gt;5-&gt;2, <em>x</em> = 3
<strong>Output:</strong> 1-&gt;2-&gt;2-&gt;4-&gt;3-&gt;5
</pre>
</div></div>

## Solution
We only need to move the element whose value is less than `x`. So I use a pointer to record the last element whose value is less than `x`. If the coming element is bigger or equal to `x`, just move forward; otherwise, link it to the poiter, and update the pointer to it. This method is in palce, take _**O(1)**_ space.

_**Time complexity: O(n)**_

## Summary
Draw the linked list to describe how it works before programming helps me a lot. 
