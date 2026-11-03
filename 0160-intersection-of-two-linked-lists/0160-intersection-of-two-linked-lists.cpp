
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int nA=0;
        int nB=0;
        while(tempA!=NULL){
            nA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            nB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        if(nA>nB){
            int diff=nA-nB;
            for(int i=1;i<=diff;i++){
                tempA=tempA->next;
            }
            while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
        }
        else{   //(nA<nB){
            int diff=nB-nA;
            for(int i=1;i<=diff;i++){
                tempB=tempB->next;
            }
            while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
        }  
    }
};