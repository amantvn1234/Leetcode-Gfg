class Solution {
public:
    int maxuncross(int i,int j,vector<int>& nums1,vector<int>& nums2,vector<vector<int>>&dp){
        if(i==nums1.size()||j==nums2.size())
        return 0; // as if any pointer reaches end then no mathing
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        int count=0;
        if(nums1[i]==nums2[j]){ // if both are equal increase count and move both
            count= 1+maxuncross(i+1,j+1,nums1,nums2,dp);
        }
        else
        count+= max(maxuncross(i+1,j,nums1,nums2,dp),maxuncross(i,j+1,nums1,nums2,dp));
        return dp[i][j]=count;
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(),vector<int>(nums2.size(),-1));
        return maxuncross(0,0,nums1,nums2,dp);
    }
};