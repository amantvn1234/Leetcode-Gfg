class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
     int ans=0;
        for(int j=0;j<grid[0].size();j++){
            int val=0;
            for(int i=0;i<grid.size();i++){
                val=max(val,grid[i][j]);
            }
            ans+=val;
        }
        return ans;
    }
};