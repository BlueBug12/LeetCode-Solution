# [37. Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)

## Description

Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:
1. Each of the digits 1-9 must occur exactly once in each row.
2. Each of the digits 1-9 must occur exactly once in each column.
3. Each of the the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

Empty cells are indicated by the character '.'.

## Solution
Use stack to find a proper answer. When finding a empty place, finding all possible answer to make a set, and push this set into stack(erase the chosen one), also record the cooridinate that we have traversed.
If there is a place whuch we can't find any possible answer, pop the stack and jump to the previous stack. Until we reach the end of sudoku, we also fill in all the answer.

But this method is memory-consuming, and not fast enough. So there is another elegent algorithm by[050806_770524](https://leetcode.com/problems/sudoku-solver/discuss/506960/simple-c%2B%2B-code-faster-than-97). There are two major differences:
1. **Travers the whole sudoku first, and use bitset map to record the limitation.** This pre-processing can save a lot of time. Using bitset is very smart because we only need to know it's true or false to fill in the value.
2. **Use recursive call, instead of stack.** It looks cleaner and easier to understand.



## Summary
Good pre-processing, good efficiency.
