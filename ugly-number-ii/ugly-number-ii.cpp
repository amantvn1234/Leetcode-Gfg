class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> s;
        long long ans;
        s.insert(1);
        while(n--){
            ans=*s.begin();
            s.insert(2*ans);
            s.insert(3*ans);
            s.insert(5*ans);
            s.erase(s.begin());
        }
        return (int)ans;
    }
};