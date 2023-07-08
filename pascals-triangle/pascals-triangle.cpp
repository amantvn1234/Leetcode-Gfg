class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);
        triangle[0].push_back(1);
        int i=1;
        while(i<numRows){
            triangle[i].push_back(1);
            int n=triangle[i-1].size();
            for(int j=0;j<n-1;j++){
                triangle[i].push_back(triangle[i-1][j]+triangle[i-1][j+1]);
            }
            triangle[i].push_back(1);
            i++;
        }
        return triangle;
    }
};