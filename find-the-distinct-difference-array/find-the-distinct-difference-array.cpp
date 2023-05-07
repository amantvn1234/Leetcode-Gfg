class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        // vector<int> pre,post;
        // map<int,int> m;
        // for(auto i:nums){
        //  m[i]++;
        //     pre.push_back(m.size());
        // }
        // m.clear();
        // for(int i=nums.size()-1;i>=0;i--){
        //     m[nums[i]]++;
        //     post.push_back(m.size());
        // }
        // reverse(post.begin(),post.end());
        // vector<int> ans;
        // for(int i=0;i<nums.size()-1;i++){
          
        //     ans.push_back(pre[i]-post[i+1]);
        //     cout<<pre[i]<<post[i]<<endl;
        // }
        // ans.push_back(pre[nums.size()-1]);
        // return ans;
        
        vector<int> ans;
        map<int,int> mp,rmp;
        for(auto i:nums){
            rmp[i]++;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            rmp[nums[i]]--;
            if(rmp[nums[i]]==0) rmp.erase(nums[i]);
            ans.push_back(mp.size()-rmp.size());
        }
        return ans;
    }
};