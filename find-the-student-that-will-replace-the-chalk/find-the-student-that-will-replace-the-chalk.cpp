class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long round1=0;
        for(int i=0;i<chalk.size();i++){
            round1+=chalk[i];
        }
        int  extra=(int)((long long)k%round1);
        int  sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
            if(extra<sum){
                return i;
            }
        }
        return -1;
    }
};