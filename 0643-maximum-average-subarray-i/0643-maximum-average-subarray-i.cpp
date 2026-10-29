class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        double mxsum=INT_MIN;
        for(int  i=0;i<k;i++){
            sum+=nums[i];
        }
        mxsum=max(sum,mxsum);
        int i=1;
        int j=k;
        while(j<n){
            sum=sum+nums[j]-nums[i-1];
            mxsum=max(sum,mxsum);
            i++;
            j++;
        }
        return mxsum/k;

    }
};