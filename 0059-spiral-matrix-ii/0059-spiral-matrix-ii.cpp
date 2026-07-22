class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> Matrix(n, vector<int>(n));
  
    
    int x=1;
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){
       // right 
    for(int j=minc;j<=maxc;j++){
        Matrix[minr][j]=x++;
    }
    minr++;
    // down
    if(minr>maxr || minc>maxc) break;
    for(int i=minr;i<=maxr;i++ ){
        Matrix[i][maxc]=x++;
        
    }
     maxc--;
    // left
    if(minr>maxr || minc>maxc) break;
    for(int j=maxc;j>=minc;j--){
         Matrix[maxr][j]=x++;
        
    }
    maxr--;
    // up
    if(minr>maxr || minc>maxc) break;
    for(int i=maxr;i>=minr;i--){
        Matrix[i][minc]=x++;
    }
    minc++;  
    }
    return  Matrix;
   
    }
};