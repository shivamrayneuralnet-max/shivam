class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int n = nums.size();
        int i = 0;
        int j = 0;
        int count = 0;
        long long product = 1; //  Changed data type to long long to avoid overflow
        
        while (j < n) {
            product *= nums[j];
            
            // Shrink the window if the product is greater than or equal to k
            while (product >= k) {
                product /= nums[i];
                i++;
            }
            
            // Added count update here after ensuring product < k
            count += (j - i + 1);
            j++;
        }
        
        return count;
    

    }
};