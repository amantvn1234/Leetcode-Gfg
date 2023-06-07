class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips=0;
        for(int i=0;i<32;i++){
            int aithbit,bithbit,cithbit;
            if(a&(1<<i)){
                aithbit=1;
            }
            else{
                aithbit=0;
            }
             if(b&(1<<i)){
                bithbit=1;
            }
            else{
                bithbit=0;
            }
             if(c&(1<<i)){
                cithbit=1;
            }
            else{
                cithbit=0;
            }
            if((aithbit|bithbit)!=cithbit){
                if(cithbit==0)
                {
                    if(aithbit^bithbit==0) // if both bits are 1
                    flips++;
                }
                flips++; // if any one bit is one or reqd=1 and present =0;
            }
        }
        return flips;
    }
};