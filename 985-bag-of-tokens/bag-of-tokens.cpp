class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int maxscore=0,score=0,i=0,n=tokens.size(),j=n-1;
        sort(tokens.begin(),tokens.end());
        while((i<=j)&&(power>=tokens[i]||score>0)){
            if(power>=tokens[i]){
                score++;
                power-=tokens[i];
                i++;     // as we have taken this smaller element
                maxscore=max(maxscore,score);
            }
            else if(score>0){
                score--;
                power+=tokens[j];
                j--;
            }
        }
        return maxscore; 

        // TC: O(n+nlogn) as two pointer +for sorting   SC: O(1)
    }
};