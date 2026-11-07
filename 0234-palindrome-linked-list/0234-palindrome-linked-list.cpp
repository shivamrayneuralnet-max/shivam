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
        ListNode* c=new ListNode(100);
        ListNode* temp=head;
        ListNode* tempC=c;
        while(temp){
            ListNode* node=new ListNode(temp->val);
            tempC->next=node;
            temp=temp->next;
            tempC=tempC->next;
        }
        c=c->next;
        c=reverse(c);
        ListNode* a=head;
        ListNode* b=c;
        while(a){
            if(a->val!=b->val) return false;
            else{
                a=a->next;
                b=b->next;
            }
        }
        return true;
    }
};