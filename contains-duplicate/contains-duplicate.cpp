class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>0)
            return 1;
            m[nums[i]]++;
        }
        return 0;
    }
};