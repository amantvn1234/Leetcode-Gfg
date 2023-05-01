class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1;
        while(i*i<=n){
            if(n%i==0)
            {
                k--;
            }
            if(k==0)
            return i;
            i++;
        }
        i--;
        if(i*i==n) i--; // to remove duplicate factor sqrt(n)
        while(i>=1){
            if(n%i==0){
                k--;
            }
            if(k==0)
            return n/i;
            i--;
        }
        return -1;
    }
};