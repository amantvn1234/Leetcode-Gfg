class Solution {
public:
        bool ispossible(vector<vector<int>>& matrix, int val,int k){  // tc:O(n+m)
            int count=0,m=matrix.size(),n=matrix[0].size();
            int i=0,j=n-1;
           while(i<m&&j>=0){
               if(matrix[i][j]<=val){
                   count+=j+1;
                   i++;
               }
               else{
                   j--;
               }
           }
            return count>=k;
        }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int st=-1e9,end=1e9,ans;
       while(st<=end){
           int mid=st+(end-st)/2;
           if(ispossible(matrix,mid,k)){
               ans=mid;
               end=mid-1;
           }
           else{
               st=mid+1;
           }
       }
       return ans;
       //tc: O((m+n)*(log(2e9)))  
    }
};