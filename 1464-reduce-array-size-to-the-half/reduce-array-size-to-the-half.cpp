class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size(),ans=0,size=n;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
       
       priority_queue<int> maxunique;
       
       for(auto i:m){
           maxunique.push(i.second);
       }

       while(size>n/2){
           size-=maxunique.top();
           maxunique.pop();
           ans++;
       }
        return ans;

        // TC: O(nlogn) as all element can be unique ans stored in priority queue SC:O(n)
    }
};