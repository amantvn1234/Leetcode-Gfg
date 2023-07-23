class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size(),diff,ans;
       vector<int> value(n,1);

       for(int i=1;i<n;i++){
           if(ratings[i]>ratings[i-1]&&value[i]<=value[i-1]){
               diff=value[i-1]-value[i]+1;
               value[i]+=diff;
               ans+=diff;
           }
       }
       for(int i=n-2;i>=0;i--){
           if(ratings[i]>ratings[i+1]&&value[i]<=value[i+1]){
               diff=value[i+1]-value[i]+1;
               value[i]+=diff;
               ans+=diff;
           }
       }
       return ans+n;
    }
};