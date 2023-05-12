class Solution {
public:
     int dp[100];
     // dp[i] represent maximum amount you can rob from index i to end
     int maxrob(int i,vector<int>& nums){
         if(i>=nums.size())
         return 0;
         if(dp[i]!=-1)
         return dp[i];
         int pick=nums[i]+maxrob(i+2,nums);
         int notpick=maxrob(i+1,nums);
        return dp[i]=max(pick,notpick);
     }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return maxrob(0,nums);
    }
};