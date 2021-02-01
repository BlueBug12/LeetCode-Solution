# [338. Counting Bits](https://leetcode.com/problems/counting-bits/)
## Description
<div class="content__u3I1 question-content__JfgR"><div><p>Given a non negative integer number <b>num</b>. For every numbers <b>i</b> in the range <b>0 ≤ i ≤ num</b> calculate the number of 1's in their binary representation and return them as an array.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">2</span>
<strong>Output: </strong><span id="example-output-1">[0,1,1]</span></pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">5</span>
<strong>Output: </strong><code>[0,1,1,2,1,2]</code>
</pre>

<p><b>Follow up:</b></p>

<ul>
	<li>It is very easy to come up with a solution with run time <b>O(n*sizeof(integer))</b>. But can you do it in linear time <b>O(n)</b> /possibly in a single pass?</li>
	<li>Space complexity should be <b>O(n)</b>.</li>
	<li>Can you do it like a boss? Do it without using any builtin function like <b>__builtin_popcount</b> in c++ or in any other language.</li>
</ul></div></div>

## Solution
Please the diagram below first:
```cpp
0 => (0)
-----------------------------
2^0 = 1 => (1)
-----------------------------
2^1 = 2 => (1)
2^0 + 2^1 = 3 => (2)
-----------------------------
2^2 = 4 => (1)
2^2 + 2^0 = 5 => (2)
2^2 + 2^1 = 6 => (2)
2^2 + 2^1 + 2^0 = 7 => (3)
-----------------------------

```
We can find that each size of interval is equal to `2^n`, and the number of 1's in the interval is equal to all the previous intervals' results plus 1. For example:
```
interval(0) = {0}
interval(1) = {interval(0) + 1} = {1}
interval(2) = {interval(0) + 1,interval(1) + 1} = {1,2}
interval(3) = {interval(0) + 1,interval(1) + 1,interval(2) + 1} = {1,2,2,3}
...
```
Time complexity: _**O(n)**_
## Summary
You can solve this problem in the more detail view of `bits`:
```c++
vector<int> countBits(int num) {
    vector<int>ans(num+1,0);
    for(int i=1;i<=num;++i)
        ans.at(i) = ans.at(i>>1) + (i&1);
    return ans;
}
```
* `i>>1` is equal to `i/2`
* `i&1` is equal to `i%2`

Or more [fancy solution](https://leetcode.com/problems/counting-bits/discuss/79527/Four-lines-C%2B%2B-time-O(n)-space-O(n)):
```c++
vector<int> countBits(int num) {
    vector<int> ret(num+1, 0);
    for (int i = 1; i <= num; ++i)
        ret[i] = ret[i&(i-1)] + 1;
    return ret;
}
```
