class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[1][1]=1;// ways to reach (1,1)
        if(grid[0][0]==1||grid[n-1][m-1]==1)
        return 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++){
                if(i==1&&j==1) continue; // if at (1,1) continue
                if(grid[i-1][j-1]==0) // if reachable
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                else 
                dp[i][j]=0;
            }
        }

    return dp[n][m];
    }
};