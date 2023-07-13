class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(2,vector<int>(n,1)); // Tabulation (iterative dp)
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[1][j]=dp[0][j]+dp[1][j-1];
                dp[0][j]=dp[1][j];
            }
        }
        return dp[1][n-1];
        //tc: O(m*n) as we two loops   sc:O(2*n) space optimised dp
    }
};