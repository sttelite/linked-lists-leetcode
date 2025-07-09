/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return nullptr;
        ListNode* tempHead;
        ListNode* slow = head;
        ListNode* nth = head;
        for (int i = 0; i < n; ++i){
            nth = nth->next;
        }
        while(nth != nullptr && nth->next != nullptr){
            nth = nth->next;
            slow = slow->next;
        }

        if (slow == head && nth == nullptr){
            return head->next;
        }
        
        slow->next = slow->next->next;

        return head;
    }
};