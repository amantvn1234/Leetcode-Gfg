
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> countrows;
        int n=grid.size();
        for(int row=0;row<n;row++){
            countrows[grid[row]]++;
        }

        vector<int> column(n);
        int matchcount=0;
        for(int col=0;col<n;col++){
            for(int i=0;i<n;i++){
                column[i]=grid[i][col];
            }
            matchcount+=countrows[column];
        }
        return matchcount;
    }
};