class Solution {
public:
     int dp[101][101];
    int up(int m,int n){
         if(m==1||n==1)
         return 1;
        if(dp[m][n]!=-1)
        return dp[m][n];
       return dp[m][n]= up(m,n-1)+up(m-1,n); 
    }
    int uniquePaths(int m, int n) {
         memset(dp,-1,sizeof(dp));
       return up(m,n);
    }
};