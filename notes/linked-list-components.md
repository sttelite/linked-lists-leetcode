numComponents
Problem: Count connected components in a linked list, where components are contiguous nodes with values from a given set.
LeetCode: 817. Linked List Components

Approach:

Store all target values in a set.

Traverse the list and reduce count when two adjacent nodes belong to the set (they form one component instead of two).

Time complexity: O(n)
Space complexity: O(k) — k is nums.size()

