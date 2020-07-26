# [3. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a string, find the length of the <b>longest substring</b> without repeating characters.</p>

<div>
<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">"abcabcbb"</span>
<strong>Output: </strong><span id="example-output-1">3
<strong>Explanation:</strong></span> The answer is <code>"abc"</code>, with the length of 3.
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong><span id="example-input-2-1">"bbbbb"</span>
<strong>Output: </strong><span id="example-output-2">1
</span><span id="example-output-1"><strong>Explanation: </strong>T</span>he answer is <code>"b"</code>, with the length of 1.
</pre>

<div>
<p><strong>Example 3:</strong></p>

<pre><strong>Input: </strong><span id="example-input-3-1">"pwwkew"</span>
<strong>Output: </strong><span id="example-output-3">3
</span><span id="example-output-1"><strong>Explanation: </strong></span>The answer is <code>"wke"</code>, with the length of 3.
             Note that the answer must be a <b>substring</b>, <code>"pwke"</code> is a <i>subsequence</i> and not a substring.
</pre>
</div>
</div>
</div>
</div></div>

## Solution
In this question, I think there are two ways to find the answer. One is to keep the longest substring we found, every time we pass a new character, we check if it has existed in the substring. This method takes a lot of time, and its time complexity is _**O(n^2)**_. The other way is to use `hash map` to record the latest position of the character, and you can calculate the longest substring length with them. In other words, trade space for time.

_**Time complexity(cpp): O(n^2)**_
_**Time complexity(python & java): O(n)**_


## Summary
In fact, we can use `unordered_map` in c++ std library to implement the hash map. But I'm too lazy to modify the original answer.
