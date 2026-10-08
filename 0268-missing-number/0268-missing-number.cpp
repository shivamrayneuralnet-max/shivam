class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // int i=0;
        // while(i<n){
        //     int correctIdx=nums[i];
        //     if(correctIdx==i || nums[i]==n) i++;
        //     else swap(nums[i],nums[correctIdx]);
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=i) return i;
        // }
        // return n;
        int actual_sum=( n*(n+1))/2;
        int virtual_sum=0;
        for(int i=0;i<n;i++){
            virtual_sum+=nums[i];
        }
        return (actual_sum - virtual_sum);
    }
};