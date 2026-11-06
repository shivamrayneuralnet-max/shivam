class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre=NULL , *Next=NULL, *curr=head;
        while(curr){
            Next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=Next;
        }
        return pre;
    }
};