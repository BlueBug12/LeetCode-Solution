# [1192. Critical Connections in a Network](https://leetcode.com/problems/critical-connections-in-a-network/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>There are&nbsp;<code>n</code> servers numbered from&nbsp;<code>0</code>&nbsp;to&nbsp;<code>n-1</code> connected by&nbsp;undirected server-to-server <code>connections</code> forming a network where <code>connections[i] = [a, b]</code>&nbsp;represents a connection between servers <code>a</code>&nbsp;and <code>b</code>. Any server can reach any other server directly or indirectly through the network.</p>

<p>A <em>critical connection</em>&nbsp;is a connection that, if removed, will make some server unable to reach some other server.</p>

<p>Return all critical connections in the network in any order.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2019/09/03/1537_ex1_2.png" style="width: 198px; height: 248px;"></strong></p>

<pre><strong>Input:</strong> n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
<strong>Output:</strong> [[1,3]]
<strong>Explanation:</strong> [[3,1]] is also accepted.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10^5</code></li>
	<li><code>n-1 &lt;= connections.length &lt;= 10^5</code></li>
	<li><code>connections[i][0] != connections[i][1]</code></li>
	<li>There are no repeated connections.</li>
</ul>
</div></div>

## Solution
It is a classical problem in graph algorithm. The `critical connection` in this problem is actually called `articulation edge` or `bridge`.  The graph would be disconnected iff the bridge is removed.
The key idea is "whether or not we can go back to the previous node from the other path". If yes, then this edge is not a `bridge` because we can still traverse the whole graph without this edge. We need two array `depth` and `up` to help record the information. `depth` is the sequence of the traversing, and `up` presents the highest(most previous) node that the current node can reach. Then we start the **DFS**(_depth first search_). Every time we encounter an unvisited node, we update its `up` and `depth` value. If any `up` value of its child node is lower, assign this value to the current `up`, which means that there exists a back edge. Finally, when any `up` value of the child node is greater then the `depth` value of the current one, that is a `bridge` because there is no other path that can replace this edge.

_**Time complexity: O(E+V)**_

## Summary
Another similiar problem is to find the `articulation node` of the graph, and the solution is also similiar. Next time I'll try it.
