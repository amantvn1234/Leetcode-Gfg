class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>> reservedrow;

       for(int i=0;i<reservedSeats.size();i++){
           reservedrow[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
       }
       
       int ans=0;

       for(auto m:reservedrow){
           unordered_map<int,int>r;
           for(int i=0;i<m.second.size();i++){
               r[m.second[i]]++;
           }

           // left seat
           if(r[2]||r[3]||r[4]||r[5]){// left not available 
             if(!(r[4]||r[5]||r[6]||r[7])){ // check if  middle  available
                ans++;
             }
             else{ // check if middle is not available check if left is availble take it
               if(!(r[6]||r[7]||r[8]||r[9])){
                ans++;
             }
             }
           }
           else{ // left available take it and check for right
             ans++;
            if(!(r[6]||r[7]||r[8]||r[9])){
                ans++;
             }
           }

          
       }
        ans+=(n-reservedrow.size())*2;

        return ans;
        // TC: O(n)  // SC:O(n)
    }
};