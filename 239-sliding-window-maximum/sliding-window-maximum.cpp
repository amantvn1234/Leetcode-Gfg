class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        set<int> s;
        unordered_map<int,int> m;
        for(int i=0;i<k;i++){
            s.insert(nums[i]);
            m[nums[i]]++;
        }
        auto it=s.end();
        it--;
        ans.push_back(*it);
         
         int n=nums.size();

         for(int i=k;i<n;i++){
              s.insert(nums[i]);
               m[nums[i]]++;
               if(--m[nums[i-k]]==0){
                   s.erase(nums[i-k]);
               }
                auto it=s.end();
                it--;
                ans.push_back(*it);
         }
      
       return ans;

    }
};