class Solution {
public:
    void f(int i,vector<int> &curr,set<vector<int>>& s,vector<int>& nums){
        // edge case
        if(i==nums.size()){
            s.insert(curr);
            return ;
        }

        // not take
        f(i+1,curr,s,nums);

        // take
        curr.push_back(nums[i]);
        f(i+1,curr,s,nums);
        curr.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        vector<vector<int>> ans;
        f(0,tmp,s,nums);
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;

    }
};