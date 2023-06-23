class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans=0;
       while(mainTank>=5&&additionalTank>0){
           mainTank-=4;
           additionalTank--;
           ans+=50;
       }
       ans+=mainTank*10;
       return ans;
    }
};