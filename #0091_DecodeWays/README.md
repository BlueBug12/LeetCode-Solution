# [91. Decode Ways](https://leetcode.com/problems/decode-ways/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>A message containing letters from <code>A-Z</code> is being encoded to numbers using the following mapping:</p>

<pre>'A' -&gt; 1
'B' -&gt; 2
...
'Z' -&gt; 26
</pre>

<p>Given a <strong>non-empty</strong> string containing only digits, determine the total number of ways to decode it.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> "12"
<strong>Output:</strong> 2
<strong>Explanation:</strong>&nbsp;It could be decoded as "AB" (1 2) or "L" (12).
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> "226"
<strong>Output:</strong> 3
<strong>Explanation:</strong>&nbsp;It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).</pre>
</div></div>

## Solution
The problem seems very complicated, but we can solve it using elegant `dynamic programming` solution. For convenience, we trace the string in reverse order from its tail. Then, we can define the optimal substructure of the problem:
```cpp
record[i] = (stoi(s.substr(i,2))<=26) ? record[i+1]+record[i+2] : record[i+1];
```
* if the substr at position i and i+1 can form a character, we have two possible decoding result.
* if not, keep the previous result value.

Notice taht we have to set the initial value at `record[n]` and `record[n-1]` to drive the whole calculation.
_**Time complexity: O(n)**_

## Summary
Only when we can extract the key idea of the question,the DP method can be applied --- The most beautiful and well-designed solution I can image.
