class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int jumbo_st=0,jumbo_end=cheeseSlices;
        while(jumbo_st<=jumbo_end){
            int mid=(jumbo_end-jumbo_st)/2 +jumbo_st;

            if(4*mid+2*(cheeseSlices-mid)==tomatoSlices)
            return {mid,cheeseSlices-mid};
            else if(4*mid+2*(cheeseSlices-mid)>tomatoSlices){
                jumbo_end=mid-1;
            }
            else
            jumbo_st=mid+1;
        }
        return {};

        // O(log(cheeseSlices))    SC:O(1)
    }
};