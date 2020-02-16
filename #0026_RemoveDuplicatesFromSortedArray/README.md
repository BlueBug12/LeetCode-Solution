# [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

## Description

Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

```example
Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.

It doesn't matter what you leave beyond the returned length.
```

## Solution
I had thought that there is no better way to traverse and delete the duplicates, but I that found a STL function [*unique*](https://en.cppreference.com/w/cpp/algorithm/unique) can be used to delete all the duplicates, which is much faster than I do.

Here is the possible implementation of *unique* :
```c++
template<class ForwardIt>
ForwardIt unique(ForwardIt first, ForwardIt last)
{
    if (first == last)
        return last;

    ForwardIt result = first;
    while (++first != last) {
        if (!(*result == *first) && ++result != first) {
            *result = std::move(*first);
        }
    }
    return ++result;
}
```
Just look the example below(r is result; f is first; l is last) :


* Init:

  | 1 | 1 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  | rf|  |    |   |   |   | l |

* while:

  loop 1:

  | 1 | 1 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  | r | f |    |   |   |   | l |

  loop 2:

  | 1 | 1 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  |   | r | f |   |   |   | l |

  | 1 | 2 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  |   | r | f |   |   |   | l |

  Loop 3:
  | 1 | 2 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  |   | r |   | f |   |   | l |

  Loop 4:
  | 1 | 2 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  |   | r |   |   | f |   | l |

  Loop 5:
  | 1 | 2 | 2 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  |   | r |   |   |   | f | l |

  | 1 | 2 | 4 | 2 | 2 | 4 |   |
  |---|---|---|---|---|---|---|
  |   |   | r |   |   | f | l |

_**Time complexity: O(N)**_

## Summary
Try to stand on the shoulders of giants; always try to use STL.
