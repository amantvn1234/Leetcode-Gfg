class Solution {
public:
    string strWithout3a3b(int a, int b) {
        char maxchar,minchar;
        int maxcount=0,mincount=0;
        if(a>b){
            maxcount=a,maxchar='a',mincount=b,minchar='b';
        }
        else if(a<b){
            maxcount=b,maxchar='b',mincount=a,minchar='a';
        }
        else{
            maxcount=mincount=a;
            maxchar='a',minchar='b';
        }
      

      // counting how many two minichar can be used

      int min2char=0,space=(maxcount+1)/2-1;

        if(mincount>=2*space){
            min2char=mincount/2;
        }
        else{
            min2char=mincount-space;
        }


      string ans="";


        while(maxcount>0){

            // taking maxchar
            if(maxcount>=2){
                ans+=maxchar;
                ans+=maxchar;
                maxcount-=2;
            }
            else{
                ans+=maxchar;
                maxcount--;
            }

            // taking minchar
            if(min2char>0){
                ans+=minchar;
                ans+=minchar;
                min2char--;
                mincount-=2;
            }
            else if(mincount>0){
                ans+=minchar;
                mincount--;
            }
        }
        return ans;

        // Tc: O(n/2)  SC:O(1)
    }
};