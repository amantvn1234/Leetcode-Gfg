class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>> reservedrow;

       for(int i=0;i<reservedSeats.size();i++){
           reservedrow[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
       }
       
       int ans=0;

       for(auto m:reservedrow){
           
           vector<int> v=m.second;
         bool left=true,middle=true,right=true;  //true means free
           for(int i=0;i<v.size();i++){
               if(v[i]>=2&&v[i]<=5){
                   left=false;
               }
               if(v[i]>=4&&v[i]<=7)
               {
                   middle=false;
               }
               if(v[i]>=6&&v[i]<=9){
                   right=false;
               }
           }

           if(left==true&&right==true){
               ans+=2;
           }
           else if(left==true||right==true||middle==true){
               ans+=1;
           }
           
          
       }
        ans+=(n-reservedrow.size())*2;

        return ans;
        // TC: O(n)  // SC:O(n)
    }
};