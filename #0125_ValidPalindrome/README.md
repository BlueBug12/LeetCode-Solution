# [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.</p>

<p><strong>Note:</strong>&nbsp;For the purpose of this problem, we define empty string as valid palindrome.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> "A man, a plan, a canal: Panama"
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> "race a car"
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>s</code> consists only of printable ASCII characters.</li>
</ul>
</div></div>

## Solution
The function `isalnum(char c)` in library `ctype.h` can check if the given character is an _alphanumeric character_ or not. In order to pass the array only once to get the answer, we find the first index of alphanumeric character from the head and the tail and compare whether or not they are the same character. Once there existes an unmatching situation, return false; and once these two indexes encounter each other, which means that the string is symmetry, then return true.

_**Time complexity: O(n)**_

## Summary
The function `isalnum(char c)` works like this:
```c++
if(c>='a'&&c<='z' || c>='0'&&c<='9' || c>='A'&&c<='Z')
    return true;
else
    return false;
```
