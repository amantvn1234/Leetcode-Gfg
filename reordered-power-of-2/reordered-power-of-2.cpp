class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<string> v;
        int val=1;
        for(int i=0;i<30;i++){
            string s=to_string(val);
            sort(s.begin(),s.end());
            v.push_back(s);
            val*=2;
        }
         string st=to_string(n);
            sort(st.begin(),st.end());
        for(int i=0;i<v.size();i++){
           if(st==v[i])
           return true;
        }
        return false;
    }
};