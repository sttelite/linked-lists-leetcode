reorderList
Problem: Reorder a singly linked list from L0 → L1 → ... → Ln to L0 → Ln → L1 → Ln-1 → L2 → ....
LeetCode: 143. Reorder List

Approach:

Use slow and fast pointers to find the middle of the list.

Split the list into two halves and reverse the second half.

Merge the two halves alternately.

Time complexity: O(n)
Space complexity: O(1) – in-place reordering without extra data structures