class Solution {
public:
     
     void combinations(vector<int>& candidates,int t,int i,vector<int>& comb,vector<vector<int>> &ans){
      if(i==candidates.size()||candidates[i]>t){
          if(t==0)
             ans.push_back(comb);
        return ;
      }
        combinations(candidates,t,i+1,comb,ans); // not take
       
       // take it
        if(t>=candidates[i]){
        comb.push_back(candidates[i]);
        t-=candidates[i];
        combinations(candidates,t,i,comb,ans);
        comb.pop_back();
        }
        
     }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> > ans;
        sort(candidates.begin(),candidates.end());
        vector<int> comb;
        combinations(candidates,target,0,comb,ans);
        return ans;
    }
};