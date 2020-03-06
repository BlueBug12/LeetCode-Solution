# [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

## Description

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

```example
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

## Solution
The method is provided by [ashishkumarguptacse
](https://leetcode.com/problems/maximum-subarray/discuss/529643/beats-100-in-100).
```c++
int maxSubArray(vector<int>& nums) {
        int max_so_far=nums[0];
        int curr = nums[0];
        for(int  x =1;x<nums.size();x++){
            curr = max(nums[x], curr+nums[x]);
            max_so_far=max(max_so_far,curr);
        }
        return max_so_far;
    }
```

_**Time complexity: O(n)**_

## Summary
Use `max` instead of `if`.
