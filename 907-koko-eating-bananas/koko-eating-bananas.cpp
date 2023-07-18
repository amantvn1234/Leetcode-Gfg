class Solution {
public: 
    bool ispossible(vector<int>&piles,int k,int h){
        long long hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=(piles[i]/k+(piles[i]%k!=0));
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1,end=*max_element(piles.begin(),piles.end()),ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(piles,mid,h)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};