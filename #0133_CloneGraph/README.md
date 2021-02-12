# [133. Clone Graph](https://leetcode.com/problems/clone-graph/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given a reference of a node in a&nbsp;<strong><a href="https://en.wikipedia.org/wiki/Connectivity_(graph_theory)#Connected_graph" target="_blank">connected</a></strong>&nbsp;undirected graph.</p>

<p>Return a <a href="https://en.wikipedia.org/wiki/Object_copying#Deep_copy" target="_blank"><strong>deep copy</strong></a> (clone) of the graph.</p>

<p>Each node in the graph contains a val (<code>int</code>) and a list (<code>List[Node]</code>) of its neighbors.</p>

<pre>class Node {
    public int val;
    public List&lt;Node&gt; neighbors;
}
</pre>

<p>&nbsp;</p>

<p><strong>Test case format:</strong></p>

<p>For simplicity sake, each&nbsp;node's value is the same as the node's index (1-indexed). For example, the first node with&nbsp;<code>val = 1</code>, the second node with <code>val = 2</code>, and so on.&nbsp;The graph is represented in the test case using an adjacency list.</p>

<p><b>Adjacency list</b>&nbsp;is a collection of unordered&nbsp;<b>lists</b>&nbsp;used to represent a finite graph. Each&nbsp;list&nbsp;describes the set of neighbors of a node in the graph.</p>

<p>The given node will&nbsp;always be the first node&nbsp;with&nbsp;<code>val = 1</code>. You must return the <strong>copy of the given node</strong> as a reference to the cloned graph.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/04/133_clone_graph_question.png" style="width: 500px; height: 550px;">
<pre><strong>Input:</strong> adjList = [[2,4],[1,3],[2,4],[1,3]]
<strong>Output:</strong> [[2,4],[1,3],[2,4],[1,3]]
<strong>Explanation:</strong> There are 4 nodes in the graph.
1st node (val = 1)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).
2nd node (val = 2)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).
3rd node (val = 3)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).
4th node (val = 4)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/07/graph.png" style="width: 163px; height: 148px;">
<pre><strong>Input:</strong> adjList = [[]]
<strong>Output:</strong> [[]]
<strong>Explanation:</strong> Note that the input contains one empty list. The graph consists of only one node with val = 1 and it does not have any neighbors.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> adjList = []
<strong>Output:</strong> []
<strong>Explanation:</strong> This an empty graph, it does not have any nodes.
</pre>

<p><strong>Example 4:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/07/graph-1.png" style="width: 272px; height: 133px;">
<pre><strong>Input:</strong> adjList = [[2],[1]]
<strong>Output:</strong> [[2],[1]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= Node.val &lt;= 100</code></li>
	<li><code>Node.val</code> is unique for each node.</li>
	<li>Number of Nodes will not exceed 100.</li>
	<li>There is no repeated edges and no self-loops in the graph.</li>
	<li>The Graph is connected and all nodes can be visited starting from the given node.</li>
</ul>
</div></div>

## Solution
To clone a graph, we have to traverse all the nodes in it. Both `BFS` and `DFS` can work well in this case. For the sake of simplicity, I choose `DFS` because of its recurive characteristic. Notice that we must avoid copying the same node in different recursion or iteration, so I maintain a `vector<Node*>` to record the copied nodes. Once the node has been copied before, we just need to make the pointer point to the rihgt address. Otherwise, we create a new node.

_**Time complexity: O(n)**_

## Summary
I think it's important to distinguish between **shallow copy** and **deep copy**. The similiar concepts in the programming language are **call by value** and **call by reference(address)**. Clarifying these issues is very helpful to every programmer.
