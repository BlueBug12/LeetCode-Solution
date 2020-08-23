# [120. Triangle](https://leetcode.com/problems/triangle/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.</p>

<p>For example, given the following triangle</p>

<pre>[
     [<strong>2</strong>],
    [<strong>3</strong>,4],
   [6,<strong>5</strong>,7],
  [4,<strong>1</strong>,8,3]
]
</pre>

<p>The minimum path sum from top to bottom is <code>11</code> (i.e., <strong>2</strong> + <strong>3</strong> + <strong>5</strong> + <strong>1</strong> = 11).</p>

<p><strong>Note:</strong></p>

<p>Bonus point if you are able to do this using only <em>O</em>(<em>n</em>) extra space, where <em>n</em> is the total number of rows in the triangle.</p>
</div></div>

## Solution
It is another good example to apply _dynamic programming_. Please see the four steps analysis of it below:

1. Optimal Fubstructure:
If a path from the root node `A0` to the leaf node `An` has the minimum path sum, then the sub-path from any node(`A1`~`An-1`) in this path to `An` also has the minimum path sum.

2. Recursive Formulation:
    ``` m[i] = min(m[i],m[i+1])+triangle[layer][i]```

3. Compute Optimal Value:
Pick the minimum path sum value in two sub-tree plus the value of the current node, then we get the optimal path sum of it.

4. Construct an Optimal Solution:
Calculate the optimal solution in each layer from bottom to top. When we finish the calculation of the top level, the value of m[0] is the final optimal solution.

_**Time complexity: O(n^2)**_

## Summary
The code of the `DP` solution always seems clean and clever, but it is not as easy as I think. It needs a lot of practices to be familiar with this advanced method.
