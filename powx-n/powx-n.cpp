class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        return 1/(x*myPow(x,-(n+1)));
        if(n==1)
        return x;
        else if(n==0)
        return 1;
        else if (n%2)
        return x*myPow(x*x,n/2);
        
        return myPow(x*x,n/2);
    }
};