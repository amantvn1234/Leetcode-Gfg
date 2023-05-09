class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowst=0,colst=0,rowend=matrix.size()-1,colend=matrix[0].size()-1;
        while(rowst<=rowend&&colst<=colend){
            int i,j;
            // print top
            i=rowst;
            for(j=colst;j<=colend;j++){
                ans.push_back(matrix[i][j]);
            }
            rowst++;
            // print left side
            j=colend;
            for(i=rowst;i<=rowend;i++){
                ans.push_back(matrix[i][j]);
            }
            colend--;

            // print bottom side
            // check if we have bottom bacha hua hai if row bachega koe unvisited tabhi to print karenge
            if(rowst<=rowend){ // then row bacha hoga print karne ko
            i=rowend;
            for( j=colend;j>=colst;j--){
                ans.push_back(matrix[i][j]);
            }
            rowend--;
            }

            // print right side
            // check if we have right bacha hua hai if column bachega koe unvisited tabhi to print karenge
            if(colst<=colend){ // then column bacha hoga print karne ko
            j=colst;
            for(i=rowend;i>=rowst;i--){
                ans.push_back(matrix[i][j]);
            }
            colst++;  // go to next colums
            }
        }
        return ans;
    }
};