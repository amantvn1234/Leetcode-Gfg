class Solution {
public:
    
    void f(int idx,vector<int>&nums,vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int swapi=idx;swapi<nums.size();swapi++){
            swap(nums[swapi],nums[idx]);
            f(idx+1,nums,ans);
            swap(nums[swapi],nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(0,nums,ans);
        return ans;
    }
};