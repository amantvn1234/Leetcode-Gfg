class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(),matchcount=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                bool match=true;
                for(int k=0;k<n;k++){
                    if(grid[row][k]!=grid[k][col]){
                        match=false;
                        break;
                    }
                }
                if(match==true)
                 matchcount++;
            }
        }
        return matchcount;
    }
};