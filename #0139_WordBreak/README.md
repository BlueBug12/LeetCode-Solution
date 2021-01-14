# [139. Word Break](https://leetcode.com/problems/word-break/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a <strong>non-empty</strong> string <em>s</em> and a dictionary <em>wordDict</em> containing a list of <strong>non-empty</strong> words, determine if <em>s</em> can be segmented into a space-separated sequence of one or more dictionary words.</p>

<p><strong>Note:</strong></p>

<ul>
	<li>The same word in the dictionary may be reused multiple times in the segmentation.</li>
	<li>You may assume the dictionary does not contain duplicate words.</li>
</ul>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "leetcode", wordDict = ["leet", "code"]
<strong>Output:</strong> true
<strong>Explanation:</strong> Return true because <code>"leetcode"</code> can be segmented as <code>"leet code"</code>.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "applepenapple", wordDict = ["apple", "pen"]
<strong>Output:</strong> true
<strong>Explanation:</strong> Return true because <code>"</code>applepenapple<code>"</code> can be segmented as <code>"</code>apple pen apple<code>"</code>.
&nbsp;            Note that you are allowed to reuse a dictionary word.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
<strong>Output:</strong> false
</pre>
</div></div>

## Solution
This is a great problem to pratice bottom-up **DP**(_dynamic programming_) algorithm. Again, the key idea of DP is to memoize the calculation results of the subproblems. In this case, the target problem is to determine whether or not there exists some combinations in the `wordDict` that can make up the string `s`, and the subproblem is _whether or not there exists some combinations in the `wordDict` that can make up the string `s[0:n-1]`,`s[0:n-2]`,`s[0:n-3]`,and so on._ We need a table `dp[s.size()+1]` to be the memoization, so that we don't have to calculate the same substring at the previous position, we only need to do the further jobs until the last position in the table has been filled in.
Because the function `find()` would take _**O(size\_of\_wordDict)**_ to do the search when the target data structure is `vector` and comparing the word woluld take _**O(largest\_word\_length\_in\_wordDict)**_. The total time complexity is:
_**Time complexity: O(n^2*size\_of\_wordDict\*largest\_word\_length\_in\_wordDict)**_

## Summary
Efficient,elegant and clean code. Only DP can do that.
