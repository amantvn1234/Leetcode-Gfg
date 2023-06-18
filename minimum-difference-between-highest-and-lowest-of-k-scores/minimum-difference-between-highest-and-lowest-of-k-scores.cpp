class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1)
        return 0;
        int ans=1e5;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-k+1;i++){
            ans=min(ans,abs(nums[i]-nums[i+k-1]));
        }
        return ans;
    }
};