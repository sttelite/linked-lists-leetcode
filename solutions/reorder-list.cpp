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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        while (head != nullptr){
            ListNode* sub = head->next;
            head->next = prev;
            prev = head;
            head = sub;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if (head->next == nullptr) return;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* reverseHead;
        ListNode* tempHead = head;
        ListNode* sub;
        ListNode* preMid = head;

        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            preMid = slow;
            slow = slow->next;
        }
        preMid->next = nullptr;
        reverseHead = reverse(slow);

        while (reverseHead != nullptr && head != nullptr){
           sub = reverseHead->next;
           reverseHead->next = head->next;
           head->next = reverseHead;
           reverseHead = sub;
           head = head->next;
           tempHead = head; 
           head = head->next;
        }
        if (head == nullptr && reverseHead != nullptr){
            tempHead->next = reverseHead;
        }
    }
};