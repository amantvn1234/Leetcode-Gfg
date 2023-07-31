class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool small=false,large=false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]<s2[i]){
                small=true;
            }
            else if(s1[i]>s2[i]){
                large=true;
            }
        }

        if(small&&large)
        return false;
        return true;
    }
};