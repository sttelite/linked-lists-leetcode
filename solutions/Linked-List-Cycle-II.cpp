/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* tempHead = head;
        bool cycle = false;
        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow){
                fast = nullptr;
                cycle = true;
            }
        }
        if (!cycle) return nullptr;

        while (slow != tempHead){
            slow = slow->next;
            tempHead = tempHead->next;
        }
        return slow;
    }
};