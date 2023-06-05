class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n=c.size(),y=c[1][1]-c[0][1],x=c[1][0]-c[0][0];

        for(int i=2;i<n;i++){
            if(x==0){   //to  avoid divisibility by 0
                if(c[1][0]!=c[i][0])
                return false;
            }
            else{
               if(c[i][1]-c[1][1]!=(y/(float)x)*(c[i][0]-c[1][0]))
                return false;
                
            }
        }
     return true;
    }
};