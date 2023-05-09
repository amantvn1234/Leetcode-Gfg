class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num=1;  // no. of rows=n,no. of columns=n
        vector<vector<int>> matrix(n,vector<int>(n,0));
         int rowst=0,colst=0,rowend=n-1,colend=n-1;
        while(rowst<=rowend&&colst<=colend){
            // print top
            for(int j=colst;j<=colend;j++){
                matrix[rowst][j]=num++;
            }
            rowst++;
            // print left side
            for(int i=rowst;i<=rowend;i++){
                matrix[i][colend]=num++;
            }
            colend--;

            // print bottom side
            // check if we have bottom bacha hua hai if row bachega koe unvisited tabhi to print karenge
            if(rowst<=rowend){ // then row bacha hoga print karne ko
             for(int  j=colend;j>=colst;j--){
                matrix[rowend][j]=num++;
            }
            rowend--;
            }

            // print right side
            // check if we have right bacha hua hai if column bachega koe unvisited tabhi to print karenge
            if(colst<=colend){ // then column bacha hoga print karne ko
            for(int i=rowend;i>=rowst;i--){
               matrix[i][colst]=num++;
            }
            colst++;  // go to next colums
            }
        }
        return matrix;
    }
};