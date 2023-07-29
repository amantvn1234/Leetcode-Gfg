class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        int mineleidx=0,n=nums1.size();
        vector<int> ans,visited(n,-1);

        for(int i=0;i<n;i++){
            if(upper_bound(nums1.begin(),nums1.end(),nums2[i])!=nums1.end()){ // found
                int idx=upper_bound(nums1.begin(),nums1.end(),nums2[i])-nums1.begin();
                if(visited[idx]==-1){  // unused
                    ans.push_back(nums1[idx]);
                    visited[idx]=1;
                }
                else{// already used
                    int j;
                    for(j=idx;j<n;j++){
                        if(visited[j]==-1)
                        {
                            ans.push_back(nums1[j]);
                            visited[j]=1;
                            break;
                        }
                    }
                    if(j==n){  // means no greater element found so we need to take any smaller element so we will take smallest element available
                        while(mineleidx<n&&visited[mineleidx]==1){
                            mineleidx++;
                        }
                        ans.push_back(nums1[mineleidx]);
                        visited[mineleidx]=1;
                    }
                }
            }
            else{// not found then take min element
                 while(mineleidx<n&&visited[mineleidx]==1){
                            mineleidx++;
                        }
                        ans.push_back(nums1[mineleidx]);
                        visited[mineleidx]=1;
            }
        }
        return ans;

        // TC:O(nlogn ) but confused
    }
};