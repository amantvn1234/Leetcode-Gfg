class Solution {
public:
    string convertToTitle(int columnNumber) {
        // aPProach similar to converting decimal to binary; TC:O(n) SC:O(26)
        string ans;
       
       while(columnNumber){
           columnNumber--;  // we are reducing it because we have 1 for A but actually 0 means A thats it;
           ans+=(columnNumber%26+'A');
           columnNumber/=26;
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};