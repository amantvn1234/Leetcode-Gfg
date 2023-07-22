class Solution {
public:

     bool ispossible(vector<int>&nums,int max_sub,int k){
       int count=0,sum=0;
       for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=max_sub){
            sum+=nums[i];
        }
        else{
            count++;
            sum=nums[i];
        }
       }
       if(sum>0)
       count++;
       return count<=k;
     }
    int splitArray(vector<int>& nums, int k) {
        int mini=*max_element(nums.begin(),nums.end()),maxi=accumulate(nums.begin(),nums.end(),0);

        while(mini<=maxi){
            int mid=mini+(maxi-mini)/2;
            if(ispossible(nums,mid,k)){
                maxi=mid-1;
            }
            else{
                mini=mid+1;
            }
        }
        return mini;
    }
};