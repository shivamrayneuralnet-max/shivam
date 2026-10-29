class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
      int  n=arr.size();
      int sum=0;
      int count=0;
      for(int i=0;i<k;i++){
       sum+=arr[i];
      }
      if(sum>=threshold*k) count++;
      int i=1;
      int j=k;
      while(j<n){
        sum=sum+arr[j]-arr[i-1];
        i++;
        j++;
        if(sum>=threshold*k) count++;
      }
      return count;
      
    }
};