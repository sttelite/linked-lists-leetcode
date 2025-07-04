detectCycle
Problem: Find the start of the cycle in a linked list, or return nullptr if there is no cycle.
LeetCode: 142. Linked List Cycle II

Approach:

Use Floyd's cycle detection (fast and slow pointers).

When a cycle is detected, move one pointer to head and advance both by one until they meet — that's the cycle's start.

Time complexity: O(n)
Space complexity: O(1)