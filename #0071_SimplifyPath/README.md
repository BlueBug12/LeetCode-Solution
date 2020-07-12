# [71. Simplify Path](https://leetcode.com/problems/simplify-path/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an <strong>absolute path</strong> for a file (Unix-style), simplify it. Or in other words, convert it to the <strong>canonical path</strong>.</p>

<p>In a UNIX-style file system, a period <code>.</code>&nbsp;refers to the current directory. Furthermore, a double period <code>..</code>&nbsp;moves the directory up a level.</p>

<p>Note that the returned canonical path must always begin&nbsp;with a slash <code>/</code>, and there must be only a single slash <code>/</code>&nbsp;between two directory names.&nbsp;The last directory name (if it exists) <b>must not</b>&nbsp;end with a trailing <code>/</code>. Also, the canonical path must be the <strong>shortest</strong> string&nbsp;representing the absolute path.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: "</strong><span id="example-input-1-1">/home/"</span>
<strong>Output: "</strong><span id="example-output-1">/home"
<strong>Explanation:</strong> Note that there is no trailing slash after the last directory name.</span>
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: "</strong><span id="example-input-1-1">/../"</span>
<strong>Output: "</strong><span id="example-output-1">/"</span>
<strong>Explanation:</strong> Going one level up from the root directory is a no-op, as the root level is the highest level you can go.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input: "</strong><span id="example-input-1-1">/home//foo/"</span>
<strong>Output: "</strong><span id="example-output-1">/home/foo"</span>
<strong>Explanation: </strong>In the canonical path, multiple consecutive slashes are replaced by a single one.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input: "</strong><span id="example-input-1-1">/a/./b/../../c/"</span>
<strong>Output: "</strong><span id="example-output-1">/c"</span>
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input: "</strong><span id="example-input-1-1">/a/../../b/../c//.//"</span>
<strong>Output: "</strong><span id="example-output-1">/c"</span>
</pre>

<p><strong>Example 6:</strong></p>

<pre><strong>Input: "</strong><span id="example-input-1-1">/a//b////c/d//././/.."</span>
<strong>Output: "</strong><span id="example-output-1">/a/b/c"</span>
</pre>
</div></div>

## Solution
This question is simple but annoying. We need to split the character `'/'` to get the name of directory, also need to jump to the outer directory if necessary. So I make a stack to record the previous length of the result string each time the new directory is added to it.  When we receive th `..` operator, pop the top of stack to get the previous length of result string, so we can resize the result string by it.

_**Time complexity: O(n)**_

## Summary
There is too many `if/else` statements in my solution, which reduce the efficiency and readability of the program.
