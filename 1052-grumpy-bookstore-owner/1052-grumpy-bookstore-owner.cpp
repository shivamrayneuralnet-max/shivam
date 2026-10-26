class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes;
        vector<int>&arr= customers;
        int n=arr.size();
        int mxLos=0;
        int prevLos=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1)  prevLos+=arr[i];
        }
        mxLos=prevLos;
        int mxIdx=0;
        int i=1;
        int j=k;
        while(j<n){
          int currLos=prevLos;
          if(grumpy[j]==1)  currLos+=arr[j];
          if(grumpy[i-1]==1)  currLos-=arr[i-1];

          if(mxLos<currLos){
            mxLos=currLos;
            mxIdx=i;
          }
          prevLos=currLos;
          i++;
          j++;
        }
        // filling zeros in the grumpy array window
        for(int i=mxIdx;i<mxIdx+k;i++){
            grumpy[i]=0;
        }
        // sum satisfication
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=arr[i];
        }
        return sum;


    
    }
};