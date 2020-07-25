# [89. Gray Code](https://leetcode.com/problems/gray-code/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>The gray code is a binary numeral system where two successive values differ in only one bit.</p>

<p>Given a non-negative integer <em>n</em> representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>&nbsp;2
<strong>Output:</strong>&nbsp;<code>[0,1,3,2]</code>
<strong>Explanation:</strong>
00 - 0
01 - 1
11 - 3
10 - 2

For a given&nbsp;<em>n</em>, a gray code sequence may not be uniquely defined.
For example, [0,2,3,1] is also a valid gray code sequence.

00 - 0
10 - 2
11 - 3
01 - 1
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>&nbsp;0
<strong>Output:</strong>&nbsp;<code>[0]
<strong>Explanation:</strong> We define the gray code sequence to begin with 0.
&nbsp;            A gray code sequence of <em>n</em> has size = 2<sup>n</sup>, which for <em>n</em> = 0 the size is 2<sup>0</sup> = 1.
&nbsp;            Therefore, for <em>n</em> = 0 the gray code sequence is [0].</code>
</pre>
</div></div>

## Solution
I wrote down the gray code sequence from n=0 to n=3, and I found some regular pattern. Just see the example below:
* n = 0:
    |0|
    |-|

* n = 1:
    |0|
    |-|
    |1|

* n = 2:
    |00|leading 0 plus 0|
    |- |-|
    |01|leading 0 plus 1|
    |11|leading 1 plus 1|
    |10|leading 1 plus 0|
    We can split it into twp part: n=1 with leading 0 and n=1 with leading 1. Notice that the second one is in reverse order of n=1.Let's see the case n=3 to get the more clear idea.
* n = 3:
    |000|leading 0 plus 00|
    |-|-|
    |001|leading 0 plus 01|
    |011|leading 0 plus 11|
    |010|leading 0 plus 10|
    |110|leading 1 plus 10|
    |111|leading 1 plus 11|
    |101|leading 1 plus 01|
    |100|leading 1 plus 00|
    You may find that this is a recursive form. The size of the vector is twice bigger than the previous one. It contains leading 0 wiht n-1 case and leading 1 with reverse n-1 case.

_**Time complexity: O(2^n)**_

## Summary
There's another interesting solution provided by [tarunkishore017
](https://leetcode.com/problems/gray-code/discuss/749462/Fastest-C%2B%2B-Solution-0ms-(-With-only-4-5-lines-of-code-)). I have no idea why he/she can figure out this magical idea. But it seems work!
```cpp
class Solution {
public:
    vector grayCode(int n) {
        vector res;
        int c = pow(2,n);
        for(int i=0;i<c;i++){
            res.push_back(i^i>>1);
        }
        return res;
    }
};
```
