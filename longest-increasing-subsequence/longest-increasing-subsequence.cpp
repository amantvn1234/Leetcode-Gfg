class Solution {
public:
// int dp[2501];
// int lis(int i,vector<int> &nums){  //return lis ending at index i
//     // if(i<=0)
//     // return 0;
//      //no use of this as we are not going to index 0 or at end using boundation by for loop
//     // dp[0]=0;
//     if(dp[i]!=-1)
//     return dp[i];
//     int ans=1;  // if only current element is taken
//     for(int j=1;j<i;j++){
//         if(nums[j-1]<nums[i-1]) {// find second ele of lis ending at index i
//              ans=max(ans,lis(j,nums)+1);
//             }}// as we are taking one element here
//     return dp[i]=ans;
// }
//     int lengthOfLIS(vector<int>& nums) {
//         memset(dp,-1,sizeof(dp));
//         int ans=1; // as ek element ka lis
//         for(int i=1;i<=nums.size();i++)
//         ans=max(ans,lis(i,nums));
//         return ans;
//     }
int dp[2501]; // 1 based indexing
int lengthOfLIS(vector<int> &nums){
int ans,an=0,n=nums.size(); // if no other element found
for(int i=1;i<=n;i++){
    ans=1;
    for(int j=1;j<i;j++){
        if(nums[j-1]<nums[i-1])
        ans=max(ans,dp[j]+1); // for accesing lis before this element which end at index j where that element is smaller
    }
    dp[i]=ans;
    an=max(ans,an);
    
}
return an;
}
};