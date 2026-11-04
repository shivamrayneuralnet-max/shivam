class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
       vector<vector<int>> Matrix(m, vector<int>(n,-1));
    ListNode* temp=head;
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
       // right 
    for(int j=minc;j<=maxc;j++){
        if(temp==NULL) return Matrix;
        Matrix[minr][j]=temp->val;
        temp=temp->next;
    }
    minr++;
    // down
    if(minr>maxr || minc>maxc) break;
    for(int i=minr;i<=maxr;i++ ){
         if(temp==NULL) return Matrix;
        Matrix[i][maxc]=temp->val;
        temp=temp->next;
        
    }
     maxc--;
    // left
    if(minr>maxr || minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
         if(temp==NULL) return Matrix;
         Matrix[maxr][j]=temp->val;
         temp=temp->next;
        
    }
    maxr--;
    // up
    if(minr>maxr || minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
         if(temp==NULL) return Matrix;
        Matrix[i][minc]=temp->val;
        temp=temp->next;
    }
    minc++;  
    }
    return  Matrix;  
    }
};