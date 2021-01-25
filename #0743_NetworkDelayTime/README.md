# [743. Network Delay Time](https://leetcode.com/problems/network-delay-time/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>You are given a network of <code>n</code> nodes, labeled from <code>1</code> to <code>n</code>. You are also given <code>times</code>, a list of travel times as directed edges <code>times[i] = (u<sub>i</sub>, v<sub>i</sub>, w<sub>i</sub>)</code>, where <code>u<sub>i</sub></code> is the source node, <code>v<sub>i</sub></code> is the target node, and <code>w<sub>i</sub></code> is the time it takes for a signal to travel from source to target.</p>

<p>We will send a signal from a given node <code>k</code>. Return the time it takes for all the <code>n</code> nodes to receive the signal. If it is impossible for all the <code>n</code> nodes to receive the signal, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/23/931_example_1.png" style="width: 217px; height: 239px;">
<pre><strong>Input:</strong> times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2
<strong>Output:</strong> 2
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> times = [[1,2,1]], n = 2, k = 1
<strong>Output:</strong> 1
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> times = [[1,2,1]], n = 2, k = 2
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= k &lt;= n &lt;= 100</code></li>
	<li><code>1 &lt;= times.length &lt;= 6000</code></li>
	<li><code>times[i].length == 3</code></li>
	<li><code>1 &lt;= u<sub>i</sub>, v<sub>i</sub> &lt;= n</code></li>
	<li><code>u<sub>i</sub> != v<sub>i</sub></code></li>
	<li><code>0 &lt;= w<sub>i</sub> &lt;= 100</code></li>
	<li>All the pairs <code>(u<sub>i</sub>, v<sub>i</sub>)</code> are <strong>unique</strong>. (i.e., no multiple edges.)</li>
</ul>
</div></div>

## Solution
The problem is what we call _single source shortest path_ problem. It's a common problem in our darily life. I choose the famous **Dijkstra's algorithm** to solve it. I think this algorithm is based on **BFS**(_Breadth First Search_), the difference is that we maintain some kind of data structure(I choose `priority queue`) that can always access the top priority(smallest or greatest key value) element. In this case, the key value represents the delay time from the source. Every time we reach a vetex, we calculate the current delay time for its neighbor vertices. If the lates delay time is less then the previous one, then we update the delay time at that neighbor vertex. Because the delay time value of the vertex has been modified, we have to push it to the priority queue with its delay time as the key value. Since we always choose the shortest delay time vertex as the starting vertex for the next round, it helps converge the result faster.

_**Time complexity: O(E+Vlog(V))**_

## Summary
[Dijkstra's algorithm in wikipedia.](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)
