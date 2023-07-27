class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]-'A']++;
        }
        int maxfreq=0;
        for(int i=0;i<26;i++){
            maxfreq=max(maxfreq,freq[i]);
            }
        int idle=(maxfreq-1)*n;
        bool maxi=true;
        for(int i=0;i<26;i++){
            if(freq[i]){
                if(maxi&&freq[i]==maxfreq){
                    maxi=false;
                }
                else{
                    idle-=min(freq[i],maxfreq-1);
                }
            }
        }
        return tasks.size()+max(0,idle);

        // tc: O(n) sc: O(26)
    }
};