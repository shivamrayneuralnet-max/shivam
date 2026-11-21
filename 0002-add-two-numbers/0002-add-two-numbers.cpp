
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int sum=0;
        int carry=0;

        ListNode* ans=new ListNode();
        ListNode* temp=ans;

        while(l1!=NULL || l2!=NULL || carry!=0) {

            sum=carry;

            if(l1!=NULL) {
                sum+=l1->val;
                l1=l1->next;
            }

            if(l2!=NULL) {
                sum+=l2->val;
                l2=l2->next;
            }

            carry=sum/10;

            ListNode* t=new ListNode(sum%10);
            temp->next=t;
            temp=temp->next;
        }

        return ans->next;
    }
};
