# [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given <code>n</code> non-negative integers <code>a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub></code><sub>&nbsp;</sub>, where each represents a point at coordinate <code>(i, a<sub>i</sub>)</code>. <code>n</code> vertical lines are drawn such that the two endpoints of the line <code>i</code> is at <code>(i, a<sub>i</sub>)</code> and <code>(i, 0)</code>. Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.</p>

<p><strong>Notice</strong>&nbsp;that you may not slant the container.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" style="width: 600px; height: 287px;">
<pre><strong>Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong>Output:</strong> 49
<strong>Explanation:</strong> The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain&nbsp;is 49.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> height = [1,1]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> height = [4,3,2,1,4]
<strong>Output:</strong> 16
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> height = [1,2,1]
<strong>Output:</strong> 2
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;=&nbsp;height.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;=&nbsp;height[i] &lt;= 3 * 10<sup>4</sup></code></li>
</ul>
</div></div>

## Solution
This question seems a little bit complicated, but actually it can be solved in _O(n)_ time complexity. We can conclude the following properties from the basic observation of the question.
1. There must be two line to form a container.
2. The height of the container is determined by the lowest one.
3. Based 2. , if there exists a bigger container, we must find another line that is higher than the lowest one to form a new container.

I think you may notice that the key point is the *property 3*. If we can make sure that the next new line we find is higher than the current lowest one until the left line is overlapping with the right line, the max area must be found. And we can finish the calculation just by passing the array once with constant space.

_**Time complexity: O(n)**_

## Summary
I think the idea in my solution seems to be `dynamic programming`. We always find the bigger area based on the previous bounds(two lines).
