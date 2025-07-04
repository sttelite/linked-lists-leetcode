getRandom
Problem: Return a random node’s value from a singly linked list with uniform probability.
LeetCode: 382. Linked List Random Node

Approach:

Use reservoir sampling to ensure equal probability without knowing the list length in advance.

On each node, pick it with probability 1/count.

Time complexity: O(n)
Space complexity: O(1)