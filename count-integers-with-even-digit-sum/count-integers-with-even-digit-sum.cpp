class Solution {
public:
// int digitsum(int n){
//     int sum=0;
//     while(n){
//         sum+=(n%10);
//         n/=10;
//     }
//     return sum;
// }

    int countEven(int num) {
        int ans=0;
        // for(int i=1;i<=num;i++){
        //    int t=digitsum(i);
        //    if(t%2==0)
        //    ans++;
        // }
        int n=num;
        while(n){
        ans+=(n%10);
        n/=10;
    }
         return ans%2==0? num/2: (num-1)/2;
         
    }
};