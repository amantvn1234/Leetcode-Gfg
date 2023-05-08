class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int size=matrix.size();
        vector<set<int>> row(size),col(size);
     for(int i=0;i<size;i++ ){
         for(int j=0;j<size;j++){
             row[i].insert(matrix[i][j]);
             col[j].insert(matrix[i][j]);
         }
     }

    //  for(int i=0;i<size;i++){
    //      for(auto j:row[i])
    //      cout<<j<<" ";
    //      cout<<endl;
    //       for(auto j:col[i])
    //      cout<<j<<" ";
    //      cout<<endl;
    //  }
     for(int i=0;i<size;i++){
         if(row[i].size()<size||col[i].size()<size)
         return false;
     }
     return true;
    }
};