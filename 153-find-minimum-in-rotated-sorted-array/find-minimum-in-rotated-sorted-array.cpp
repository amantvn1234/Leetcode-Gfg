class Solution {
public:
int findpivot(vector<int> &nums){
        int n=nums.size(),st=0,end=n-1,ans;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]<=nums[n-1]){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return nums[ans];
    }
    int findMin(vector<int>& nums) {
        return findpivot(nums);
    }
};