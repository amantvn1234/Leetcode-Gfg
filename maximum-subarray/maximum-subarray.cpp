class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsubsum=-1e5;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxsubsum=max(maxsubsum,sum);
            if(sum<0){
                sum=0;
            }
        }
    return maxsubsum;
    }
};