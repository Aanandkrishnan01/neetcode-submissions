class Solution {
public:
    void cs(vector<int>&comb,vector<vector <int>> &ans,int i,vector<int>&nums,int target)
    {
        if(i == nums.size() || target<0)
            return;
        if(target==0)
        {
            ans.push_back({comb});
            return;

        }


        comb.push_back(nums[i]);
        
        cs(comb,ans,i,nums,target-nums[i]);
        comb.pop_back();
        cs(comb,ans,i+1,nums,target);



    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        cs(comb, ans, 0, nums, target);

        return ans;

    }
};
