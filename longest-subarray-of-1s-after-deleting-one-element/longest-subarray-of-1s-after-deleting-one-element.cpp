class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max1=0,count1=0,n=nums.size(),count0=0;
        for(int i=0;i<n;i++){
            if(nums[i]){
                count1++;
            }
            else{
                count0++;
                count1=0;
            }
            nums[i]=count1;
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i])
            nums[i]=max(nums[i],nums[i+1]);
        }
      for(int i=0;i<n;i++)
      max1=max(max1,nums[i]);
        for(int i=1;i<n-1;i++){
            if(nums[i]==0){
                if(nums[i-1]&&nums[i+1]){
                    max1=max(max1,nums[i-1]+nums[i+1]);
                }
            }
        }
        if(count0==0)
        return n-1;
    
    return max1;
    }
};