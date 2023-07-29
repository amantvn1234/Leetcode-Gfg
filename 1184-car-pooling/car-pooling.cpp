class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> roadpoints;
        for(int i=0;i<trips.size();i++){
            roadpoints[trips[i][1]]+=trips[i][0];
            roadpoints[trips[i][2]]-=trips[i][0];
        }

        int passcount=0;
        for(auto i:roadpoints){
            passcount+=i.second;
            if(passcount>capacity)
            return false;
        }
        return true;

        // TC: O(n)   SC:O(n)
    }
};