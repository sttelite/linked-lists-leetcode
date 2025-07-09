/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == NULL) return nullptr;

        Node* tempHead = head;
        Node* foll;


        std::unordered_map<Node*, Node*> seen;

        while(head != NULL){
            seen[head] = new Node(head->val);
            head = head->next;
        }
        head = tempHead;
        Node* newHead = seen[head];

        for (auto& k : seen){
            if (k.first->next)
                k.second->next = seen[k.first->next];
            else
                k.second->next = nullptr;

            if (k.first->random)
                k.second->random = seen[k.first->random];
            else
                k.second->random = nullptr;
        }
        return seen[head];        
    }
};