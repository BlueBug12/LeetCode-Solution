# [127. Word Ladder](https://leetcode.com/problems/word-ladder/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given two words (<em>beginWord</em> and <em>endWord</em>), and a dictionary's word list, find the length of shortest transformation sequence from <em>beginWord</em> to <em>endWord</em>, such that:</p>

<ol>
	<li>Only one letter can be changed at a time.</li>
	<li>Each transformed word must exist in the word list.</li>
</ol>

<p><strong>Note:</strong></p>

<ul>
	<li>Return 0 if there is no such transformation sequence.</li>
	<li>All words have the same length.</li>
	<li>All words contain only lowercase alphabetic characters.</li>
	<li>You may assume no duplicates in the word list.</li>
	<li>You may assume <em>beginWord</em> and <em>endWord</em> are non-empty and are not the same.</li>
</ul>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
beginWord = "hit",
endWord = "cog",
wordList = ["hot","dot","dog","lot","log","cog"]

<strong>Output: </strong>5

<strong>Explanation:</strong> As one shortest transformation is "hit" -&gt; "hot" -&gt; "dot" -&gt; "dog" -&gt; "cog",
return its length 5.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]

<strong>Output:</strong>&nbsp;0

<strong>Explanation:</strong>&nbsp;The endWord "cog" is not in wordList, therefore no possible<strong>&nbsp;</strong>transformation.
</pre>

<ul>
</ul>
</div></div>

## Solution
The major problem of this question is _"How to make it faster?"_ because it takes a lot of time to find the next transformed word. Here comes two heuristics to help us.
1. Use `unordered_set` as our primary data structure because it takes _**O(1)**_ to find whether or not the word exists in it.
2. Two ended search instead of only from one side. If the transformation path exists, you can search it from the begin-word or end-word. As a result, we maintain two `unordered_set` to represent these two ends, and always pick the smaller to do the search.

After finishing the search, you need to update the `unordered_set` to those transformed words you find in that round, and keep search again until you find a path or can not go on.

_**Time complexity: O(length_of_string * length_of_list^2)**_

## Summary
My previous submission always occurred _Time Limit Exceeded Error_, so the solution is actually provided by [jasperjoe
](https://leetcode.com/problems/word-ladder/discuss/538519/C%2B%2B-bidirectional-BFS-beats-97). It is a very brilliant solution.
