
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // concition if head->val==val -> moves head;
     while(head!=NULL && head->val==val) head=head->next;
     if(head==NULL) return head;
     ListNode* temp=head;
     while(temp->next!=NULL){
        if(temp->next->val==val) {
            ListNode* a=temp->next;
            temp->next=temp->next->next;
            delete a;
        }
        else temp=temp->next;
     }
     return head;
    }
     
};