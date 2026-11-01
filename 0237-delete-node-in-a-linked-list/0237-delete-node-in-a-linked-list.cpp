
class Solution {
public:
    void deleteNode(ListNode* target) {
        target->val=target->next->val; //putting the value in the next node 
        target->next=target->next->next; // deleting the next node
    }
};