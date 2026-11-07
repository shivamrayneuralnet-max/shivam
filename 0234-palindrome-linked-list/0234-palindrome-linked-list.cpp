class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode *pre=NULL,*curr=head,*Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=Next;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
        // if the fast half and second half is reverse of each other then it is palindrome
        ListNode* slow=head;
        ListNode* fast=head;
       while(fast->next!=NULL && fast->next->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       // slow is at the left middle
       ListNode* newHead =reverse(slow->next);
       ListNode* a=head;
       ListNode* b=newHead;
       while(b){
        if(a->val!=b->val) return false;
        a=a->next;
        b=b->next;
       }
       return true;

    }
};