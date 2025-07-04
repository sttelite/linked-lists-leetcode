hasCycle
Problem: Determine if a linked list has a cycle.
LeetCode: 141. Linked List Cycle

Approach:

Use Floyd's Tortoise and Hare algorithm.

If slow and fast pointers ever meet, a cycle exists.

Time complexity: O(n)
Space complexity: O(1)

