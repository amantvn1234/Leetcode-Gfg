class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size(),st=0,end=m*n-1,mid,r,c;
        while(st<=end){
            mid=st+(end-st)/2;
            r=mid/n,c=mid-n*r;
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]<target){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};