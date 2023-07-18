class Solution {
public:
    bool ispossible(vector<int>&dist,int speed,double hour){
        double time=0;
        for(int i=0;i<dist.size()-1;i++){
            time+=(dist[i]/speed+(dist[i]%speed!=0));
        }
        time+=(double)dist[dist.size()-1]/speed;
        return time<=hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        // applying bs on speed;
        int st=1,end=1e7,ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(ispossible(dist,mid,hour)){
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