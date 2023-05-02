class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        // long long round1=0;
        // for(int i=0;i<chalk.size();i++){
        //     round1+=chalk[i];
        // }
        // int  extra=(int)((long long)k%round1);
        // int  sum=0;
        // for(int i=0;i<chalk.size();i++){
        //     sum+=chalk[i];
        //     if(extra<sum){
        //         return i;
        //     }
        // }
        // return -1;
        // TC :O(2*sizeof(arr1)) as we store each element in fq and then reuse it 
        vector<long> chsum(chalk.begin(),chalk.end());// copying old data in new to store big element as we create prefix sum array
        int n=chsum.size();
        for(int i=1;i<n;i++){
            chsum[i]+=chsum[i-1];
        }
        k%=chsum[n-1];
        int st=0,end=n-1; // as ans will be in this range 
        // we will use binary search same as we have used earlier in searching position to place an element in an array if that element is not already present(return begin at the end of binary search) with some changes.
        while(st<=end){
            int mid=st+(end-st)/2;
            if(k==chsum[mid])
            return mid+1;  // if able to give all the chalks at index mid
            else if(k<chsum[mid])
            end=mid-1;  // if reqd is more than available
            else
            st=mid+1; // if available amount is more.
        }
  return st;
    }
};