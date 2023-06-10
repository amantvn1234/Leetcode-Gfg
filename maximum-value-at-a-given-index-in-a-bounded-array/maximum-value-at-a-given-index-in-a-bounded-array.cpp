class Solution {
public:
   long long sum(int i,int m,int n){
       long long l=min(i,m-1),r=min(n-1-i,m-1),a=m-1,leftindexes=n-l-r-1;
       return m+(l/2.0)*(2*a-(l-1))+(r/2.0)*(2*a-(r-1))+leftindexes;
   }
    int maxValue(int n, int index, int maxSum) {
        int ans,st=1,end=maxSum;

        while(st<=end){
            int mid=(end-st)/2+st;
            if(sum(index,mid,n)<=(long long)maxSum){
                ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
     return ans;
    }
};