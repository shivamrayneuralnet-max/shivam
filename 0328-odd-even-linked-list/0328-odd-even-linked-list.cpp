class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* odd=new ListNode(100);
        ListNode* even=new ListNode(100);
        ListNode* tempOd=odd;
        ListNode* tempEv=even;
        ListNode* temp=head;
        int count=1;
        while(temp!=NULL){
            if(count%2!=0){
                tempOd->next=temp;
                temp=temp->next;
                tempOd=tempOd->next;
                count++;
            }
            else{
                tempEv->next=temp;
                temp=temp->next;
                tempEv=tempEv->next;
                count++;
            }
        }
        tempOd->next=even->next;
        tempEv->next=NULL;
        return odd->next;
    }
};