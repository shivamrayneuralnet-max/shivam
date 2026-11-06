class Solution {
public:
    ListNode* getNodeAt(ListNode* head , int  idx){
      ListNode* temp=head;
        for(int  i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        int i=0;
        int j=len-1;
        while(i<j){
            ListNode* left=getNodeAt(head,i);
            ListNode* right=getNodeAt(head,j);
            int t=left->val;
            left->val=right->val;
            right->val=t;
            i++;
            j--;
        }
        return head;
    }
};