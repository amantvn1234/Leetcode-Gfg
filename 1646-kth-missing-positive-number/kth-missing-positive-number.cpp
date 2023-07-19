class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mis=0,i=0,val=1,n=arr.size();
        while(mis<k){
            if(i<n&&arr[i]==val){ // found
                i++;
            }
            else{ // not found
                mis++;
            }
            val++;
        }
        return val-1;
    }
};