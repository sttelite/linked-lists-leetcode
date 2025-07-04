splitListToParts
Problem: Split a linked list into k parts as evenly as possible.
LeetCode: 725. Split Linked List in Parts

Approach:

Count total length of the list.

Calculate base size and distribute the remainder among the first parts.

Cut the list in-place and store heads of each part.

Time complexity: O(n)
Space complexity: O(k) — for result array