class Solution {
public:
    int st(int n){
        if(n>=1000)
        return n/1000;
        else if(n>=100)
        return n/100;
        else if(n>=10)
        return n/10;
        else{
            return n%10;
        }
    }
    int countBeautifulPairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(__gcd(st(nums[i]),nums[j]%10)==1)
                    ans++;
            }
        }
        return ans;
    }
};