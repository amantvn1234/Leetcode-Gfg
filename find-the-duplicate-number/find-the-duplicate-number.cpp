class Solution {
public:
int storeatindex(vector<int> & nums,int cur){
    if(nums[cur]==cur)
    return cur;
    swap(cur,nums[cur]);
    
    return storeatindex(nums,cur);
}
    int findDuplicate(vector<int>& nums) {
    //     unordered_set<int> s;
    //     for(auto i:nums){
    //         if(s.find(i)!=s.end())
    //         return i;
    //         s.insert(i);
    //     }
    //    return -1; 
    // tc:O(n) sc:O(n)

// sort(nums.begin(),nums.end());

// for(int i=1;i<nums.size();i++)
//    if(nums[i]==nums[i-1])
//    return nums[i];
//    return -1;
//     }
// tc:O(nlogn) sc:O(1)

//m3:
return storeatindex(nums,nums[0]);
    }
};