class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int piv=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piv=i;
                break;
            }
        }
        if(piv==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        reverse(nums.begin()+(piv+1) , nums.end());
        // finding the just greate element 
        int j=1;
        for(int i=piv+1;i<n;i++){
            if(nums[i]>nums[piv]){
                j=i;
                break;
            }
        }
        // swapping  the pivot ang just greater
        swap(nums[piv] , nums[j]);
    }
};