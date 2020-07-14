# [1. Two Sum](https://leetcode.com/problems/two-sum/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an array of integers, return <strong>indices</strong> of the two numbers such that they add up to a specific target.</p>

<p>You may assume that each input would have <strong><em>exactly</em></strong> one solution, and you may not use the <em>same</em> element twice.</p>

<p><strong>Example:</strong></p>

<pre>Given nums = [2, 7, 11, 15], target = 9,

Because nums[<strong>0</strong>] + nums[<strong>1</strong>] = 2 + 7 = 9,
return [<strong>0</strong>, <strong>1</strong>].
</pre>
</div></div>

## Solution
If the array is sorted, we only need _**O(n)**_ time complexity to find two index numbers. So the main problem is how to sort the array faster. However, `HashMap` can be considered another kind of sort. Every time we pick an element in array, we check whether or not the corresponding element exists in the map.

_**Time complexity: O(n)**_

## Summary
It's a simple question, but there are many kinds of interesting solutions to solve it.
