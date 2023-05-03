class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       vector<int> freq(nums.size()+1,0);
       for(int i=0;i<nums.size();i++){
           freq[nums[i]]++;
       }
       vector<int> ans;
       int miss;
       for(int i=1;i<=nums.size();i++){
           if(freq[i]==2){ans.push_back(i);
           }
           else if(freq[i]==0){
            miss=i;
            }
       }
           ans.push_back(miss); 
       return ans;
    }
};