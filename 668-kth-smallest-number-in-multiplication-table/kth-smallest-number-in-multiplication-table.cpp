class Solution {
public:
     bool ispossible(int m,int n,int ans,int k){
         int count=0;// no. of elements less than or equals k
         for(int i=1;i<=m;i++){
             count+=min(ans/i,n);
         }
       return count>=k;
     }
    int findKthNumber(int m, int n, int k) {
        int min=1,max=m*n,ans;

    // applying binary search on which element(ans) to take and check there should be k elements<=ans
        while(min<=max){
            int mid=(min+max)>>1;
            if(ispossible(m,n,mid,k)){
                ans=mid;
                max=mid-1;
            }
            else{
                min=mid+1;
            }
        }
        return ans;

        //tc:O(mlog(m*n))   sc:O(1)
    }
};