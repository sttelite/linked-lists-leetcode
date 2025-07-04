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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head->next == nullptr || left == right) return head;

        ListNode* tempHead = head;
        right -= left;

        ListNode dummy(0);
        dummy.next = head;

        if (left == 1) tempHead = &dummy;
        ListNode* prev = &dummy;

        while (left > 2){
            tempHead = tempHead->next;
            left -= 1;
        }

        ListNode* lastBeforeReverse = tempHead;
        tempHead = tempHead->next;

        ListNode* firstAfterReverse;
        ListNode* nextNode = tempHead->next;
        
        while (right != 0){
            right -= 1;
            prev = tempHead;
            tempHead = nextNode;
            if (tempHead != nullptr) nextNode = tempHead->next;
            tempHead->next = prev;
        }

        firstAfterReverse = nextNode;
        (lastBeforeReverse->next)->next = firstAfterReverse;
        lastBeforeReverse->next = tempHead;

        return dummy.next;
    }
};
