# [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/)

## Description

Given a collection of intervals, merge all overlapping intervals.

```example
Input: [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
```

## Solution
At first, I sort the whole vector by the fist element of the sub vector, and travese the sorted vector again to find the overlapping intervals and merge them. It works, but it's too slow. I think that sorting the vector is a wasate of time.

So I modified the solution provided by [kam_hei
](https://leetcode.com/problems/merge-intervals/discuss/530501/C%2B%2B-94.13-100.00-Using-Balanced-Search-Tree). This method is very ingenious because it takes advantage of the characteristics of `map`, which arranges the elements automatically and insert them pretty fast(_O(nlogn)_). We can determine which intervals are overlapping by the value of each key in map, and pick the merged interval to push into the answer.

_**Time complexity: O(nlogn)**_

## Summary
Very interesting problem and helpful solution.
