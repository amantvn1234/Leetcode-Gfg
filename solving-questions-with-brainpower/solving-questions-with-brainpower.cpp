class Solution {
public:
// memoization
  long long dp[100000];
   long long maxpoint(int i,vector<vector<int>>& questions){
       if(i>=questions.size())
       return 0;
       if(dp[i]!=-1)
       return dp[i];
       long long score=0;
       long long pick=questions[i][0]+maxpoint(i+questions[i][1]+1,questions);
       long long notpick=maxpoint(i+1,questions);
       score=max(pick,notpick);
       return dp[i]=score;
   }
    long long mostPoints(vector<vector<int>>& questions) {
        memset(dp,-1,sizeof(dp));
       return  maxpoint(0,questions);
    }
};