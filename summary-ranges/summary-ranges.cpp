class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
   
     vector<string> ans;
     int st,end,i;
     if(nums.size()<1)
     return ans;
     st=end=nums[0];
     i=1;
     while(i<nums.size()){
         if(nums[i]==end+1){
             end+=1;
         }
         else{
             if(st==end){
                 ans.push_back(to_string(st));
             }
             else{
                 ans.push_back(to_string(st)+"->"+to_string(end));
             }
             st=end=nums[i];
         }
         i++;
     }
       if(st==end){
                 ans.push_back(to_string(st));
             }
             else{
                 ans.push_back(to_string(st)+"->"+to_string(end));
             }
     return ans;
    }
};