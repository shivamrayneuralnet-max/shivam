
class Solution {
public:
     ListNode* reverseList(ListNode* head){
        ListNode *pre=NULL,*curr=head,*Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=Next;
        }
        return pre;
    }
    void reorderList(ListNode* head) {
        // if the fast half and second half is reverse of each other then it is palindrome
        ListNode* slow=head;
        ListNode* fast=head;
       while(fast->next!=NULL && fast->next->next!=NULL){
           slow=slow->next;
           fast=fast->next->next;
       }
       // slow is at the left middle
       ListNode* b =reverseList(slow->next);
       ListNode* a=head;
       slow->next=NULL; // for breaking the list
       // merge these two -> a and b alternatively
       ListNode* c=new ListNode(100);
       ListNode* tempC=c;
       ListNode* tempA=a;
       ListNode* tempB=b;
       while(tempA && tempB){
        tempC->next=tempA;
        tempA=tempA->next;
        tempC=tempC->next;

        tempC->next=tempB;
        tempB=tempB->next;
        tempC=tempC->next;
       }
       tempC->next=tempA;
       head=c->next;

    }
};