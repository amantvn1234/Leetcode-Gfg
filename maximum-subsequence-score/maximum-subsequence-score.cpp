class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,int>> sortbynums2;
        priority_queue<int,vector<int>,greater<int>> k_max;
        for(int i=0;i<nums1.size();i++){
            sortbynums2.push({nums2[i],nums1[i]});
        }
        long long k1sum=0,k1=k-1;
        
        while(k1--){
            auto top=sortbynums2.top();
            k1sum+=top.second;
            k_max.push(top.second);
            sortbynums2.pop();
        }
         // for kth smallest nums2[i] we get first ans and then we update it if it increases
        long long mini=sortbynums2.top().first,ksum=k1sum+sortbynums2.top().second;
        k_max.push(sortbynums2.top().second);
        sortbynums2.pop();
        long long ans=mini*ksum;
        
        while(sortbynums2.size()){
            auto top=sortbynums2.top();
            ksum-=k_max.top();
            k_max.pop();
            ksum+=top.second;
            k_max.push(top.second);
            mini=top.first;
            ans=max(ans,mini*ksum);
            sortbynums2.pop();
        }
        
     return ans;
    }
};