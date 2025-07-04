/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode* next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int lenA = 0, lenB = 0;
        ListNode* intersectionA = headA;
        ListNode* intersectionB = headB;

        while (intersectionA != NULL){
            intersectionA = intersectionA->next;
            lenA++;
        }
        while (intersectionB != NULL){
            lenB++;
            intersectionB = intersectionB->next;
        }
        intersectionA = headA;
        intersectionB = headB;
        int diff = lenA - lenB;
        if (diff > 0){
            for (int i = 0; i < abs(diff); ++i){
                intersectionA = intersectionA->next;
            }
        }
        else{
            for (int i = 0; i < abs(diff); ++i){
                intersectionB = intersectionB->next;
            }
        }
        while (intersectionA != NULL){
            if (intersectionA == intersectionB){
                return intersectionA;
            }
            intersectionA = intersectionA->next;
            intersectionB = intersectionB->next;
            
        }
        return NULL;

    }

};