class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> columns;
        int n=grid.size(),matchcount=0;
        for(int col=0;col<n;col++){
            string s="";
            for(int row=0;row<n;row++){
                s=s+'_'+to_string(grid[row][col]);
            }
            columns[s]++;
        }

        for(int row=0;row<n;row++){
            string s="";
            for(int col=0;col<n;col++){
                s=s+'_'+to_string(grid[row][col]);
            }
           if(columns[s]>0)
           matchcount+=columns[s];
        }
        return matchcount;
    }
};