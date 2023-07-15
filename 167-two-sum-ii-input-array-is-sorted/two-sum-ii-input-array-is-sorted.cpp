class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> m; // stores index of a no.s
        int n=numbers.size();
        for(int i=0;i<n;i++){
            if(m.find(target-numbers[i])!=m.end()){ // finding if its complement exists
                return {m[target-numbers[i]]+1,i+1};
            }
            m[numbers[i]]=i;

        }
        return {0,0};
    }
};