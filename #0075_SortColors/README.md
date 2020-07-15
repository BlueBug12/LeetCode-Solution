# [75. Sort Colors](https://leetcode.com/problems/sort-colors/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an array with <em>n</em> objects colored red, white or blue, sort them <strong><a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a>&nbsp;</strong>so that objects of the same color are adjacent, with the colors in the order red, white and blue.</p>

<p>Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.</p>

<p><strong>Note:</strong>&nbsp;You are not suppose to use the library's sort function for this problem.</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> [2,0,2,1,1,0]
<strong>Output:</strong> [0,0,1,1,2,2]</pre>

<p><strong>Follow up:</strong></p>

<ul>
	<li>A rather straight forward solution is a two-pass algorithm using counting sort.<br>
	First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.</li>
	<li>Could you come up with a&nbsp;one-pass algorithm using only constant space?</li>
</ul>
</div></div>

## Solution
Because the range of element value is _0-2_, which is very suitable for `counting sort`. The counting sort need to pass the array twice, however, we can solve this problem just pass the array once with a constant space. Let me show the idea. First, we need an array of size 3 to record the starting position of each color, and the value of record is initialized to be -1. Then, we can begin to pass the array. If the value is 2, we do nothing but to record it's current position when the value of color[2] is -1, which means it's empty; If the value is 1, we need to swap it's position with color[2] if color[2]!=-1, and modify the value of record; If the value is 0, we need to swap it's position twice, first for color[2], and second for color[1], also need to update the value of  record. As you can see, the worst case happens when we encounter `2`, but even in this situation, the time complexity is still constant. So the total time complexity is equal to _**O(2n)**_ = _**O(n)**_

You can see the example below to understand the idea more clearly.
#### Initial:
Array:

|2 |0 |2 |1 |1 |0 |
|--|--|--|--|--|--|

Color_record:

 |-1|-1|-1|
 |--|--|--|

#### Iteration i=0:
Steps:
 1. set color position of blue(2) = 0

Array:

|2 |0 |2 |1 |1 |0 |
|--|--|--|--|--|--|

Color_record:

|-1|-1|0 |
|--|--|--|

#### Iteration i=1:
Steps:
 1. set color position of red(0) = 1
 2. swap element's position with color[2], and modify the color_record  
 3. don't need to swap with color[1] because it's empty

Array:

|0 |2 |2 |1 |1 |0 |
|--|--|--|--|--|--|

Color_record:

|0 |-1|1 |
|--|--|--|

#### Iteration i=2:

Steps:
    1. color blue(2) is not empty, just do nothing.

Array:

|0 |2 |2 |1 |1 |0 |
|--|--|--|--|--|--|

Color_record:

|0 |-1|1 |
|--|--|--|

#### Iteration i=3:
Steps:
1. set color[1] to be color[2] because it's empty
2. swap element's position with color[2], and modify the color_record

Array:

|0 |1 |2 |2 |1 |0 |
|--|--|--|--|--|--|

Color_record:

|0 |1 |2 |
|--|--|--|

#### Iteration i=4:
Steps:
1. swap element's position with color[2], and modify the color_record

Array:

|0 |1 |1 |2 |2 |0 |
|--|--|--|--|--|--|

Color_record:

|0 |1 |3 |
|--|--|--|

#### Iteration i=5:
Steps:
1. swap element's position with color[2], and modify the color_record
2. swap element's position with color[1], and modify the color_record

Array:

|0 |0 |1 |1 |2 |2 |
|--|--|--|--|--|--|

Color_record:

|0 |2 |4 |
|--|--|--|

_**Time complexity: O(n)**_

## Summary
The execution time of this method is directly proportional to the range of element value. Though it's time complexity is still _**O(n)**_ theoretically.
