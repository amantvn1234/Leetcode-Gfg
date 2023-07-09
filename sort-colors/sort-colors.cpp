class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,n=nums.size(),two;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            zero++;
            else if(nums[i]==1)
            one++;
        }
        int i=0;two=n-one-zero;
        while(zero--){
            nums[i++]=0;
        }
        while(one--){
            nums[i++]=1;
        }
        
        while(two--){
            nums[i++]=2;
        }
    }
};