class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int smallidx=0,n=nums.size(),curidx=0;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                smallidx=i-1,curidx=i;
                break;
            }
        }
        if(curidx!=0){
           for(int i=n-1;i>=curidx;i--){
               if(nums[smallidx]<nums[i]){
                   swap(nums[smallidx],nums[i]);
                   break;
               }
           } 
        }
        reverse(nums.begin()+curidx,nums.end());
// TC:O(3*n) sc:O(1)
    }
};