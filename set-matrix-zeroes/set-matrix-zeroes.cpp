class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        bool colzero=false;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                colzero=true;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0){
                matrix[0][0]=0;
                break;
            }
        }

        // finding rows and columns having zeros
        for(int r=1;r<m;r++){
            for(int c=1;c<n;c++){
                if(matrix[r][c]==0){
                    matrix[0][c]=0,matrix[r][0]=0;
                }
            }
        }

        // updating 0s in rows and columns

        for(int r=1;r<m;r++){
            for(int c=1;c<n;c++){
                if(matrix[0][c]==0||matrix[r][0]==0){
                    matrix[r][c]=0;
                }
            }
        }

        if(!matrix[0][0]){
           for(int i=0;i<n;i++){
            matrix[0][i]=0;
            }
        } 

        if(colzero){
            for(int i=0;i<m;i++){
            matrix[i][0]=0;
        }
        }

      //TC:  O(2*m*n)  SC:O(1)
    }
};