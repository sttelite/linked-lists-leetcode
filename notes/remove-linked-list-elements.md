Problem: Remove all nodes with a given value from a singly linked list.
LeetCode: 203. Remove Linked List Elements

Approach:

Traverse with curr, prev, and sub pointers.

Update links to skip nodes with target value.

Handle removal at head separately.

Time complexity: O(n)
Space complexity: O(1)
