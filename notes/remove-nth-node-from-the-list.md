removeNthFromEnd
Problem: Remove the nth node from the end of a singly linked list.
LeetCode: 19. Remove Nth Node From End of List

Approach:

Use two pointers: advance one by n steps.

Then move both until the fast pointer reaches the end.

The slow pointer will be just before the node to remove.

Adjust pointers to skip the target node.

Time complexity: O(n)
Space complexity: O(1)