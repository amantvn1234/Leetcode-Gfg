class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> m;
        for(int i=0;i<bills.size();i++){
           if(bills[i]==5){
               m[5]++;
           }
           else if(bills[i]==10){
               m[10]++;
               if(m[5]>=1){
                   m[5]--;
               }
               else{
                   return false;
               }
           }
           else{
               if(m[5]>=1&&m[10]>=1){
                   m[5]--,m[10]--;
               }
               else if(m[5]>=3){
                   m[5]-=3;
               }
               else{
                   return false;
               }
           }
        }
        return true;
    }
};