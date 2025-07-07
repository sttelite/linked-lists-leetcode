addTwoNumbers
Problem: Add two numbers represented by linked lists, where each node contains a single digit and digits are stored in reverse order.
LeetCode: 2. Add Two Numbers

Approach:

Traverse both lists simultaneously.

At each step, sum corresponding digits and a carry from the previous step.

Use a dummy head to simplify list construction.

Add remaining carry if needed.

Time complexity: O(max(n, m))
Space complexity: O(max(n, m)) – for the result list