class NumMatrix {
public:
int prefix[201][201];// 1 based indexing
  int pre(int i,int j,vector<vector<int>> matrix){
      if(i==0||j==0)
      return 0;
      int ans=0;
      ans=pre(i-1,j,matrix)+pre(i,j-1,matrix)-pre(i-1,j-1,matrix)+matrix[i-1][j-1];
      return prefix[i][j]=ans;
  }
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        memset(prefix,0,sizeof(prefix));
        // pre(n,m,matrix);
        for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
      prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+matrix[i-1][j-1];
      cout<<prefix[i][j]<<" ";
          }
          cout<<endl;
        }
      
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++,col1++,row2++,col2++;
       return prefix[row2][col2]-prefix[row2][col1-1]-prefix[row1-1][col2]+prefix[row1-1][col1-1]; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */