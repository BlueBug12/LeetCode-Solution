# [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/)

## Description

Given an array of strings, group anagrams together.

```example
Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
```

## Solution
Sort the string to distinguish the anagrams, and use a unordered_map to record the sorted string and it's index in vector of answer.

_**Time complexity: O(n* mlogm)**_ (m==length of longest string)

## Summary
```cpp
for(auto item : strs)
```
This syntax would copy the elements of vector automatically.
