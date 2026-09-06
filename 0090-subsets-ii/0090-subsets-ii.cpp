class Solution {
public:
    void helper(int idx, vector<int>& nums, vector<int>& ans, vector<vector<int>>& finalAns) {
        finalAns.push_back(ans);

        for(int i = idx; i < nums.size(); i++) {
            // skip duplicates
            if(i > idx && nums[i] == nums[i-1]) continue;

            ans.push_back(nums[i]);
            helper(i + 1, nums, ans, finalAns);
            ans.pop_back(); // backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // IMPORTANT
        vector<vector<int>> finalAns;
        vector<int> ans;

        helper(0, nums, ans, finalAns);
        return finalAns;
    }
};