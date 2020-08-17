# [7. Reverse Integer](https://leetcode.com/problems/reverse-integer/)

## Description
<div class="content__u3I1 question-content__JfgR"><div><p>Given a 32-bit signed integer, reverse digits of an integer.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 123
<strong>Output:</strong> 321
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> -123
<strong>Output:</strong> -321
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> 120
<strong>Output:</strong> 21
</pre>

<p><strong>Note:</strong><br>
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2<sup>31</sup>,&nbsp; 2<sup>31&nbsp;</sup>− 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.</p>
</div></div>

## Solution
This question is a great example to show the difference between _strong type_ and _weak type_. Though there seems to be no formal definition of these two type, we can compare language to regard it as a stronger, or weaker type than the other. If we consider `python` is a weaker type than `c++` and `java`, the relation between these three languages can be viewed as `python < c++ < java`. In `python`, it doesn't even matter that the type of variable is needed to be pre-defined or not. But in `c++` and `java`, we have to use `long` type to make sure that the numebr stroed in the variable won't occur _overflow_. The convenience of _weak type_ may slow down the efficiency of the program, and also make the programer dumber with the usage of space.

_**Time complexity: O(n)**_

## Summary
I still consider that `c++` is a more suitable language than `python` for the beginner who desire to be an outstanding programmer.
