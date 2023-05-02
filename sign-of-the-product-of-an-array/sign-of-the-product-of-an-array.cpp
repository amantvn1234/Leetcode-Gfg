class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool zero=false;
        int neg=0;
        for(int i=0;i<nums.size();i++)
        {if(nums[i]==0)
        zero=true;
        else if(nums[i]<0)
        neg++;
        }
       if(zero)
       return 0;
       return neg%2 ?-1:1;
    }
};