class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
            int n=nums.size();
        // prefix sum
        int pre[n];
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=nums[i]+pre[i-1];
        }
        int suf[n];
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=nums[i]+suf[i+1];
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if (suf[i]==pre[i]){
                ans=i;
                break;
            }
        }
        return ans;
    }
};