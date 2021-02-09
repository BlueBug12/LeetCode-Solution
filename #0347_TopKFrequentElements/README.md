# [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

## Description
<div class="description__24sA"><div class="css-101rr4k"><div class="content__u3I1 question-content__JfgR"><div><p>Given a non-empty array of integers, return the <b><i>k</i></b> most frequent elements.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong>nums = <span id="example-input-1-1">[1,1,1,2,2,3]</span>, k = <span id="example-input-1-2">2</span>
<strong>Output: </strong><span id="example-output-1">[1,2]</span>
</pre>

<div>
<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong>nums = <span id="example-input-2-1">[1]</span>, k = <span id="example-input-2-2">1</span>
<strong>Output: </strong><span id="example-output-2">[1]</span></pre>
</div>

<p><b>Note: </b></p>

<ul>
	<li>You may assume <i>k</i> is always valid, 1 ≤ <i>k</i> ≤ number of unique elements.</li>
	<li>Your algorithm's time complexity <b>must be</b> better than O(<i>n</i> log <i>n</i>), where <i>n</i> is the array's size.</li>
	<li>It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.</li>
	<li>You can return the answer in any order.</li>
</ul>
</div></div>

## Solution
The first intuitive thought is to count the frequency of numbers as fast as possible. If we use `map` in _c++ STL_, it will take _**O(log(n))**_ for each insertion, and the total time complexity to build the `map` is _**O(nlog(n))**_. However, if we choose `hash table`(named `unordered_map` in _c++ STL_) as the data structure for counting, it will take _**O(1)**_ for each insertion, and _**O(n)**_ for all. Using `map` or `hash table` depends on the requirement of developer. It is a trade-off the space and time.
Secondly, we need to sort the frequency of each number. The most intuitive way is directly sorting the frequency number, but it will take _**O(nlog(n))**_. Notice the constrain in the `Note:`
> It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.

Based on the constrain mentioned above, we can apply **bucket sort** in this case, which needs only _O(n)_ for sorting.

_**Time complexity: O(n)**_ (for `hash table`)
_**Time complexity: O(nlogn)**_ (for `map`)

## Summary
I learned _bucket sort_ in the lecture of _computer algorithm_ before. But at that time, I thought it was useless because it required the element of the sequence must be **unique**, and the range of the number should be discrete and bounded. But I'm wrong. There is no useless algorithm, only useless programmer.
