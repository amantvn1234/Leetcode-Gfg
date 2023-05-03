class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> n1only,n2only;
        for(int i=0;i<nums1.size();i++){
            n1only[nums1[i]]=1;
            n2only[nums1[i]]=-1;
        }

        for(int i=0;i<nums2.size();i++){
            if(n2only[nums2[i]]!=-1)
            n2only[nums2[i]]=1;
            n1only[nums2[i]]=-1;
        }
        nums1.clear(),nums2.clear();
        for(auto i:n1only){
            if(i.second>0)
            nums1.push_back(i.first);
           }
        cout<<endl;
        for(auto i:n2only){
            if(i.second>0)
            nums2.push_back(i.first);
            }
return {nums1,nums2};
    }
};