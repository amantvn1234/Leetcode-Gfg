class Solution {
public:
int dp[21][21]; // 1 based indexing
   bool match(int i,int j,const string &s,const string & t){
       // base cases
       if(i==0&&j==0) // both s and t empty
       return 1;
        else if(i==0) // s empty but t is not
        {
            if(t[j-1]=='*')
            return match(i,j-2,s,t);
            else
            return 0;
        }
        if(j==0) // t is empty but s is not
        return 0;


        if(dp[i][j]!=-1)
        return dp[i][j];
        
        bool ans=0; // as initialized with false no need to see case 3 in copy
        if(s[i-1]==t[j-1]||t[j-1]=='.')
         ans=match(i-1,j-1,s,t);

        else if(t[j-1]=='*')
         {ans=match(i,j-2,s,t); // take empty from t i.e wo wala case jisme s[
            if(s[i-1]==t[j-2]||t[j-2]=='.') // i] not matching with t[i-1]
             ans=ans||match(i-1,j,s,t);
         }
         return dp[i][j]=ans;
        

   }
    bool isMatch(string s, string p) {
       memset(dp,-1,sizeof(dp)); 
       return match(s.size(),p.size(),s,p);
    }
};