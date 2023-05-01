class Solution {
public:
 void seperate(int num,vector<int> &s){
     if(num==0)
     return ;
     seperate(num/10,s);
     s.push_back(num%10);
 }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
       for(int i=0;i<nums.size();i++){
            seperate(nums[i],ans);
       }
        return ans;
    }
};