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
    void reverse(ListNode*& head, ListNode*& prev, ListNode*& next){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        ListNode* next = head;
        ListNode* left = nullptr;
        ListNode* right = nullptr;

        if (head->next == nullptr) return true;
        if (head->next->next == nullptr) return head->val == head->next->val;

        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next;
            reverse (slow, prev, next);
            if (fast->next == nullptr){
                left = prev;
                right = slow;
                }
                else{
                    fast = fast->next;
                }
        }

        if (left == nullptr){
            left = prev;
            right = slow->next;
        }

        while (left != nullptr){
            if (left->val != right->val){
                return false;
            }
            else{
                left = left->next;
                right = right->next;
            }
        }

        return true;
    }
};