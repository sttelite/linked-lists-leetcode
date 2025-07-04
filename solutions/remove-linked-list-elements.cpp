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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return head;

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* sub = head->next;

        while (curr != nullptr && sub != nullptr){
            if (curr->val == val){
                if (prev == nullptr){
                    if (head->next != nullptr){
                        head = head->next;
                    }
                    else{
                        return nullptr;
                    }
                    curr = head;
                }
                else prev->next = sub;
            }
            else{
                prev = curr;
            }
            curr = sub;            
            sub = sub->next;
        }
        if (curr->val == val){
            if (prev == nullptr) return nullptr;
            prev->next = nullptr;
        }
        return head;
    }
};