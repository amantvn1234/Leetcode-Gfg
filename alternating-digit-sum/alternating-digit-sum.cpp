class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sum=0,b;
        for(int i=0;i<s.size();i++){
            b=s[i]-'0';
            if(i%2){
                b=-b;
            }
        sum+=b;
        }
        return sum;
    }
};