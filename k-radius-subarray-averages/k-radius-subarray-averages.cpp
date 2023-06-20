class Solution {
public:
  long long lower(int ind,vector<long long> &nums){
      if(ind==-1)
      return 0;
      return nums[ind];
  }
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        long long s=nums[0];
        vector<long long> sum(n,0);
        sum[0]=nums[0];
        for(int i=1;i<n;i++){
            s+=nums[i];
            sum[i]=s;
           }
        vector<int> ans(n,-1);
        if(k>=n/2+1)
        return ans;
        for(int i=k;i<n-k;i++){
            ans[i]=(sum[i+k]-lower(i-k-1,sum))/(2*k+1);
        }
        return ans;
    }
};