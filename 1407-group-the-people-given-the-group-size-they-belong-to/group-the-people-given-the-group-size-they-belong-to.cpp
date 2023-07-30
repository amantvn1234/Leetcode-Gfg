class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> groups;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }

        for(auto i:mp){
            int gsize=i.first,gcount=i.second.size()/gsize,l=0;
            for(int k=0;k<gcount;k++){
                vector<int> oneg;
                int s=gsize;
                while(s--){
                    oneg.push_back((i.second)[l++]);
                }
                groups.push_back(oneg);
            }
        }
        return groups;

        // TC:O(2*n) as traversing + taking each element while creating groups
        // SC:O(n)  map used
    }
};