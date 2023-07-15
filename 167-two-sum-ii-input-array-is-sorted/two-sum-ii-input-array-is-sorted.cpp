class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0,end=numbers.size()-1;
        while(st<end){
            if(numbers[st]+numbers[end]==target)
            {
                return {st+1,end+1};
            }
            else if(numbers[st]+numbers[end]<target){
                st++;
            }
            else{
                end--;
            }
        }
        return {0,0};

        //tc:O(n) as two pointer  sc:O(1)
    }
};