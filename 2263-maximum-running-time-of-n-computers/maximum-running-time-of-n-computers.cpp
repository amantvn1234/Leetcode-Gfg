class Solution {
public:
    bool ispossible(long long runtime,vector<int>&bat,int n){
        int count=0;
        long long curtime=0;
        for(int i=0;i<bat.size();i++){
            if(bat[i]<runtime) curtime+=bat[i];
            else curtime+=runtime;     // we are not taking extra if val>rutime bcoz we can't take help from that battery which in use when we need to use it at  some other places
        }
        return curtime>=n*runtime;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long mini=*min_element(batteries.begin(),batteries.end()),maxi=1e14,ans;
        while(mini<=maxi){
            long long mid=(maxi-mini)/2 + mini;
            if(ispossible(mid,batteries,n)){
                ans=mid;
                mini=mid+1;
            }
            else{
                maxi=mid-1;
            }
        }
        return ans;
    }
};