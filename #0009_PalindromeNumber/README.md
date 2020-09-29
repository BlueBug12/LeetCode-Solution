# [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Determine whether an integer is a palindrome. An integer&nbsp;is&nbsp;a&nbsp;palindrome when it&nbsp;reads the same backward as forward.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 121
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p><strong>Follow up:</strong></p>

<p>Could you solve&nbsp;it without converting the integer to a string?</p>
</div></div>

## Solution
If we can use extra _O(n)_ space to convert the number into string, this problem is very easy to be solved. We just need to compare the first half and the last half of the string character by character. However, we can solve this problem with constant space. The basic idea may not be as difficult as you think, just consider the definition of palindrome number --- "_it reads the same backward as forward_". Let's take it from a different perspective --- "_the first-half reads the same as reverse last-half_". As a result, what we need to do is to reverse the last-half of the number, and split the fist-half number at the same time, then compare these two numbers. Be careful of the odd length number and not to make number with leading 0.

_**Time complexity: O(n)**_

## Summary
No matter with extra space or not, these two solution both take _**O(n)**_ time complexity. But if we don't consider the time to create the string, the _O(n)_ space method may be a little bit faster because if the number is not a palindrome, the program may not need to check every character.
