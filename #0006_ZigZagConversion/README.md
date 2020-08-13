# [6. ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>The string <code>"PAYPALISHIRING"</code> is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)</p>

<pre>P   A   H   N
A P L S I I G
Y   I   R
</pre>

<p>And then read line by line: <code>"PAHNAPLSIIGYIR"</code></p>

<p>Write the code that will take a string and make this conversion given a number of rows:</p>

<pre>string convert(string s, int numRows);</pre>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "PAYPALISHIRING", numRows = 3
<strong>Output:</strong> "PAHNAPLSIIGYIR"
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "PAYPALISHIRING", numRows =&nbsp;4
<strong>Output:</strong>&nbsp;"PINALSIGYAHRPI"
<strong>Explanation:</strong>

P     I    N
A   L S  I G
Y A   H R
P     I</pre>
</div></div>

## Solution
I think it's easier to think in this way: compress the `ZigZag` pattern into a set of string. Please see the example below:
The ZigZag pattern, numRows = 4:
```
P     I    N
A   L S  I G
Y A   H R
P     I
```
Convert to a string set:
```
PIN
ALSIG
YAHR
PI
```
As a result, we need a string set whose number is equal to `numRows` to record the character, and make sure that the character is pushed into the correct position in up and down sequence. After all, link all the string in the set and return it as the answer.

_**Time complexity: O(n)**_

## Summary
Who create this weird question? I can not figure out any application about this in the real world.
