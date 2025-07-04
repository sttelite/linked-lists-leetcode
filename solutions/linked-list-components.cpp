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
    int numComponents(ListNode* head, vector<int>& nums) {
        std::unordered_set<int> components;
        int compNumber = nums.size();
        for (auto& num : nums){
            components.insert(num);
        }

        while (head != nullptr && head->next != nullptr){
            if (components.count(head->val) && components.count(head->next->val)) compNumber -= 1;
            head = head->next;
        }
        return compNumber;
        
    }
};