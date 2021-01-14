# [152. Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

## Description

<div class="content__u3I1 question-content__JfgR"><div><p>Given an integer array&nbsp;<code>nums</code>, find the contiguous subarray within an array (containing at least one number) which has the largest product.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> [2,3,-2,4]
<strong>Output:</strong> <code>6</code>
<strong>Explanation:</strong>&nbsp;[2,3] has the largest product 6.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> [-2,0,-1]
<strong>Output:</strong> 0
<strong>Explanation:</strong>&nbsp;The result cannot be 2, because [-2,-1] is not a subarray.</pre>
</div></div>

## Solution
This also a problem that can be solved by **DP**(_dynamic programming_) method. However, because of the characteristic of continuity, actually we only need _**O(1)**_ extra space to store the necessary information.
I think the key point in this problem can be summarized as below:
* The maximum contiguous subarray product may be minimum if it multiplies a negative number.
* The minimum contiguous subarray product may be maximum if it multiplies a negative number.
* We should always keep a maximum product result.

As you can see, when doing the calculation, we should not just keep the maximum contiguous subarray product, but also the minimum because the alternation of sign may happen when it comes the negative number. So, we need two variables to memoize the current maximum/minimum contiguous subarray product, and one to record the maximum product result the program has ever made. Please see the following code, you would get what I mean more clearly.
```cpp
//cont_max is the current maximum contiguous product result
//cont_min is the current minimum contiguous product result
for(size_t i = 1;i<nums.size();++i){
    cont_max[i] = max({cont_max[i-1]*nums.at(i),cont_min[i-1]*nums.at(i),nums.at(i)});
    cont_min[i] = min({cont_max[i-1]*nums.at(i),cont_min[i-1]*nums.at(i),nums.at(i)});
    ans = max(cont_max[i],ans);
}
```
Actually, everytime we update `cont_max` and `cont_min`, we just need the previous result, not the whole array. So we can change to this version to get the better space complexity:
```cpp
for(size_t i = 1;i<nums.size();++i){
    int temp_max = max({cont_max*nums.at(i),cont_min*nums.at(i),nums.at(i)});
    int temp_min = min({cont_max*nums.at(i),cont_min*nums.at(i),nums.at(i)});
    cont_max = temp_max;
    cont_min = temp_min;
    ans = max(cont_max,ans);
}
```

_**Time complexity: O(n)**_

## Summary
Sometimes we don't need that "table" to do DP algorithm. It depends on the characteristic of the problem. It's a flexible method, not a rigid formula.
