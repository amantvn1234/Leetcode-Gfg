class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long round1=accumulate(chalk.begin(),chalk.end(),0ll);
        long long extra=((long long)k%round1);
        long long sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
            if(extra<sum){
                return i;
            }
        }
        return -1;
    }
};