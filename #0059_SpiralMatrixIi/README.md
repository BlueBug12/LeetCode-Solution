# [59. Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/)

## Description

Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

```example
Input: 3
Output:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]
```

## Solution
I use the same idea from [48. Rotate Image](https://github.com/BlueBug12/LeetCode-Solution/tree/master/%230048_RotateImage) to solve this problem.
 At first, I expand the for loop like this:
```c++
for(int i=0;i<n/2;++i){
    for(int j=0+i;j<n-1-i;++j){
        ans[i][j]=counter++;
    }
    for(int j=0+i;j<n-1-i;++j){
        ans[j][n-i-1]=counter++;
    }
    for(int j=0+i;j<n-1-i;++j){
        ans[n-i-1][n-j-1]=counter++;
    }
    for(int j=0+i;j<n-1-i;++j){
        ans[n-j-1][i]=counter++;
    }
}
```
Then, I merge the four for loops:
```c++
for(int i=0;i<n/2;++i){
    for(int j=i;j<n-1-i;++j){
        ans[i][j]=counter++;
        ans[j][n-i-1]=counter+n-2-2*i;
        ans[n-i-1][n-j-1]=counter+2*n-3-4*i;
        ans[n-j-1][i]=counter+3*n-4-6*i;
    }
    counter+=3*(n-1-2*i);
}
```
These two methods seem to have the same efficiency.

_**Time complexity: O(n^2)**_

## Summary

I found an interesting thing when seeing the solution submitted by the other guy. At first, I  allocate a 2D vector by the code below:

```c++
vector<vector<int>>ans;
for(int i=0;i<n;++i){
    vector<int>v;
    v.assign(n,0);
    ans.push_back(move(v));
}
```
But this way is faster and cleaner:
```c++
vector<vector<int>>ans(n,vector<int>(n,0));
```
