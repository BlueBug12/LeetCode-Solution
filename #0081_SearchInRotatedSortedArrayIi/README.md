# [81. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.</p>

<p>(i.e., <code>[0,0,1,2,2,5,6]</code> might become <code>[2,5,6,0,0,1,2]</code>).</p>

<p>You are given a target value to search. If found in the array return <code>true</code>, otherwise return <code>false</code>.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [2<code>,5,6,0,0,1,2]</code>, target = 0
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [2<code>,5,6,0,0,1,2]</code>, target = 3
<strong>Output:</strong> false</pre>

<p><strong>Follow up:</strong></p>

<ul>
	<li>This is a follow up problem to&nbsp;<a href="/problems/search-in-rotated-sorted-array/description/">Search in Rotated Sorted Array</a>, where <code>nums</code> may contain duplicates.</li>
	<li>Would this affect the run-time complexity? How and why?</li>
</ul>
</div></div>

## Solution
At first, I split this solution into two parts: one is to find the pivot, the other is to do the binary search. As we know, binary search can finish in _**O(logn)**_, but I can not figure out any way to find the pivot less than _**O(n)**_ time. So, why not just pass the vector to find the `target`? There is a function `find()` in c++ standard library. We can use one line to solve the problem.

_**Time complexity: O(n)**_

## Summary
Don't get lost in time complexity. Sometimes the simple method is more powerful than you think.
