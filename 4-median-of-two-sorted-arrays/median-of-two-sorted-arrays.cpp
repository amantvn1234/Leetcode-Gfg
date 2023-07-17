class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size(),left=0,right=0;
        vector<int> v;// merged array
        while(left<n&&right<m){
            if(nums1[left]<=nums2[right]){
                v.push_back(nums1[left++]);
            }
            else{
                v.push_back(nums2[right++]);
            }
        }

        // if nums1 has element left
        while(left<n){
            v.push_back(nums1[left++]);
        }
        // if nums2 has element left
        while(right<m){
            v.push_back(nums2[right++]);
        }

        n=v.size();
        float ans;
        if(n%2){
            ans=v[n/2];
        }
        else{
            ans=(v[n/2]+v[n/2-1])/2.0;
        }
 return ans;
    }
};