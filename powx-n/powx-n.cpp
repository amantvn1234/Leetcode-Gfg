class Solution {
public:
double myPow(double x, int n) {
   
    double result = 1;
     if (n < 0) {
         result=result/x; // as we multiplied by x in n=-(n+1)
        x = 1 / x;
        n = -(n+1);
     
    }
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }
    return result;
}



};