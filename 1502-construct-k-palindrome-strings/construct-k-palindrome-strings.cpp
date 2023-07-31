class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int odd=0,even=0;
        for(auto i:m){
            even+=i.second/2;
            if(i.second%2)
            odd++;
        }
        if(odd>k)
        return false;
        return s.size()>=k;  // even kitna bhi hoga adjust ho jayega
    }
};