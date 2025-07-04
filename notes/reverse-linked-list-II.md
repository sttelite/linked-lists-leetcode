reverseBetween
Problem: Reverse a sublist of a linked list from position left to right.
LeetCode: 92. Reverse Linked List II

Approach:

Use a dummy node to handle edge cases like left == 1.

Move to the node before reversal starts.

Reverse nodes between left and right using pointer manipulation.

Reconnect reversed segment with the rest of the list.

Time complexity: O(n)
Space complexity: O(1)

