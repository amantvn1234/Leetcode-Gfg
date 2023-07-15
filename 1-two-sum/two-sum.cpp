class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp; // it store the index of particular key
        for(int i=0;i<nums.size();i++){
            int idx=mp[target-nums[i]];
            if(i!=idx&&(nums[i]+nums[idx]==target))
            return {i,idx};
            mp[nums[i]]=i;
            }
            return {};
    }
    // tc:O(n) and sc:O(n)
};