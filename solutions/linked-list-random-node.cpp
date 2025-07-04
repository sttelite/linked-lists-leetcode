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
private:
    ListNode* head;
    inline static std::mt19937 gen_{std::random_device{}()};

public:
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int curr = 0;
        double count = 0;
        std::uniform_real_distribution<> dist(0.0, 1.0);
    
        double x = 0;
        ListNode* node = head;
        while(node != nullptr){
            count++;
            x = 1/count;
            if (dist(gen_) <= x){
                curr = node->val;
            }
            node = node->next;
        }
        return curr;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */