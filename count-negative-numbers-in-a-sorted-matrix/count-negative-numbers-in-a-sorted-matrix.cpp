class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),r=m-1,c=0,negative=0;

        while(r>=0&&c<n){
            if(grid[r][c]>=0){
                c++;
            }
            else{
                negative+=n-c;
                r--;
            }
        }
        return negative;
    }
};