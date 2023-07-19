class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int ans=0;
        int st=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            if(st>intervals[i][0]){
                st=min(st,intervals[i][1]);
                ans++;
            }
            else{
                st=intervals[i][1];
            }
        }
        return ans;

    }
};