copyRandomList
Problem: Make a deep copy of a linked list where each node has a next and a random pointer.
LeetCode: 138. Copy List with Random Pointer

Approach:

Use a hash map to store the mapping from original nodes to their copies.

First pass: create new nodes and populate the map.

Second pass: assign next and random pointers using the map.

Time complexity: O(n)
Space complexity: O(n) – for the hash map