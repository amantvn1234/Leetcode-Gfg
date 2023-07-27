class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> lastidx;
        vector<int> ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            lastidx[s[i]]=i;
        }

        int i=0;

        while(i<n){
            int count=0,Lidx=lastidx[s[i]];

            while(i<=Lidx){
                count++;
                Lidx=max(Lidx,lastidx[s[i]]);
                i++;
            }
            ans.push_back(count);

        }


        // TC: O(2*n)   SC:O(26)
        return ans;
    }
};