getIntersectionNode
Problem: Find the node at which two singly linked lists intersect.
LeetCode: 160. Intersection of Two Linked Lists

Approach:

Count lengths of both lists.

Align starting points by advancing the longer list.

Move both pointers in parallel until intersection is found.

Time complexity: O(n + m)
Space complexity: O(1)