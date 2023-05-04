class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int> delement,relement;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='D'){
                delement.push(i);
            }
            else
            relement.push(i);
        }

        while(delement.size() && relement.size()){
            int a=delement.front(),b=relement.front();
            delement.pop(),relement.pop();
            if(a<b){
                delement.push(a+n);
            }
            else{
                relement.push(b+n);
            }
        }
        string ans;
        if(delement.size()){
            ans="Dire";
        }
        else{
            ans="Radiant";
        }
        return ans;
    }
};