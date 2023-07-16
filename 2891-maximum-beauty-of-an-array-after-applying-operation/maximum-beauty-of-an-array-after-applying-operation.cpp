class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        // Using sorting as we need to count so sequence doesn't matter
        // Hence Sorting + Sliding Window
        int st=0,end=0;
        sort(nums.begin(),nums.end());
        while(end<nums.size()){
            if((nums[end]-nums[st])>(2*k))  // this end element cannot be part of subsequence
            {
                st++;
            }
            end++;
        }
        return end-st;
        // TC: O(nlogn+n) due to sorting + while loop  SC: O(1)
    }
};