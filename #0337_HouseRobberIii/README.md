# [337. House Robber III](https://leetcode.com/problems/house-robber-iii/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>The thief has found himself a new place for his thievery again. There is only one entrance to this area, called the "root." Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that "all houses in this place forms a binary tree". It will automatically contact the police if two directly-linked houses were broken into on the same night.</p>

<p>Determine the maximum amount of money the thief can rob tonight without alerting the police.</p>

<p><b>Example 1:</b></p>

<pre><strong>Input: </strong>[3,2,3,null,3,null,1]

     <font color="red">3</font>
    / \
   2   3
    \   \
     <font color="red">3   1
</font>
<strong>Output:</strong> 7
<strong>Explanation:</strong>&nbsp;Maximum amount of money the thief can rob = <font color="red" style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">3</font><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;"> + </span><font color="red" style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">3</font><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;"> + </span><font color="red" style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">1</font><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;"> = </span><b style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">7</b><span style="font-family: sans-serif, Arial, Verdana, &quot;Trebuchet MS&quot;;">.</span></pre>

<p><b>Example 2:</b></p>

<pre><strong>Input: </strong>[3,4,5,1,3,null,1]

&nbsp;    3
    / \
   <font color="red">4</font>   <font color="red">5</font>
  / \   \
 1   3   1

<strong>Output:</strong> 9
<strong>Explanation:</strong>&nbsp;Maximum amount of money the thief can rob = <font color="red">4</font> + <font color="red">5</font> = <b>9</b>.
</pre></div></div>

## Solution
It is obvious a **DP** problem. The _optimal substructure_ is that if we want to get the maximum amount of money from current node, we must find the maximum amount at its left and right subtrees before that. Then, we can construct the answer from its subproblems:
```cpp
max_amount_of_current_node = max(current_node->val + sum(max_amount_of_grandchild_node), sum(max_amount_of_child_node));
```
Befefit from the stack call of recursive **DFS**, we don't need to keep a table to record the maximum value at each node, just using some reference parameters and making good use of return value.

_**Time complexity: O(n)**_

## Summary
**DP** with **DFS** is very elegant, but it is hard to understand the inspiration behind it..
