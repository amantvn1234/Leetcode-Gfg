class Solution {
public:
    bool isFascinating(int n) {
        string s=to_string(n);
        s+=to_string(2*n),s+=to_string(3*n);
        vector<int> v(10,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'0']++;
            if(v[s[i]-'0']==2||v[0]>0){
                return false;
            }
        }
        return true;
    }
};