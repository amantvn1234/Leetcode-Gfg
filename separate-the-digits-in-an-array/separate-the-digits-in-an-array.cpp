class Solution {
public:
    void seperate(int num,vector<int> & ans){
        stack<int> st;
        while(num%10!=num){
            st.push(num%10);
         num/=10;
        }
        st.push(num);
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            seperate(nums[i],ans);
        }
        return ans;
    }
};