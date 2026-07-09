class Solution {
public:
    void rotatepart(int i, int j, vector<int>& nums) {
        while(i <= j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k = k % n;

        rotatepart(0, n - k - 1, nums);
        rotatepart(n - k, n - 1, nums);
        rotatepart(0, n - 1, nums);
    }
};