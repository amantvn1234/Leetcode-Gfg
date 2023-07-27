class Solution {
public:
    char slowestKey(vector<int>& r, string k) {
        char ans=k[0];
        int maxtime=r[0];
        for(int i=1;i<r.size();i++){
            int diff=r[i]-r[i-1];
            if(diff>maxtime){
                ans=k[i],maxtime=diff;
            }
            else if(diff==maxtime){
                ans=max(ans,k[i]);
            }
        }
        return ans;
    }
};