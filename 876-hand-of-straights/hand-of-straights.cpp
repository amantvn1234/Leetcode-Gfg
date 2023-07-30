class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
          map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        while(!freq.empty()){
            int start=freq.begin()->first;
            //cout<<start<<endl;
            int st=start;
            while(st<start+k){
                if(freq[st]){
                    freq[st]--;
                    if(freq[st]==0){
                        freq.erase(st);
                    }
                }
                else return false;

                st++;
            }
        }
        return true;

        // TC: O(n)   SC:O(n)
    }
};