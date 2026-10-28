class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int flips=0,i=0,j=0;
        int mxlen=INT_MIN ,len=INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{ // nums[j]==0
                if(flips<k){
                    flips++;
                    j++;
                }
                else{ // flips==k
                     // calculate len
                     len=j-i;
                     mxlen=max(mxlen,len);
                   // i ko just uske aage walo zero ke ek index aage le jao
                   while(nums[i]!=0) i++; // after this 100 per nums[i] ==0
                   i++;
                   j++;
                }
            }
        }
        len=j-i;
        mxlen=max(mxlen,len);
        return mxlen-1;
    }
};