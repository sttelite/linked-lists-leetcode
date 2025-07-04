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
    int getDiff(int& diff){
        if(diff > 0){
            diff -= 1;
            return 1;
        }
        return 0;
    }

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        std::vector<ListNode*> heads;

        int size = 0;
        ListNode* curr = head;
        ListNode* next = head;

        while (curr != nullptr){
            ++size;
            curr = curr->next;
        }

        int len = size/k;
        int diff = size - len*k;
        bool progress = true;

        for (int j = 0; j < k; j++){

            if (!progress) heads.push_back(nullptr);
            else heads.push_back(head);
            progress = false;
            int currentDiff = getDiff(diff);
            for(int i = 0; i < len + currentDiff; ++i){
                curr = head;
                head = head->next;
                progress = true;  
            }
            
            if (curr != nullptr) curr->next = nullptr;
        }

        return heads;
    }
};