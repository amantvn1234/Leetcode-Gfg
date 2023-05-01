class Solution {
public:
    double average(vector<int>& sal) {
        int minsal=sal[0],maxsal=sal[0],n=sal.size(),totalsal=sal[0];
        for(int i=1;i<n;i++){
            minsal=min(minsal,sal[i]);
            maxsal=max(maxsal,sal[i]);
            totalsal+=sal[i];
        }
        cout<<totalsal<<" "<<minsal<<" "<<maxsal;
        return (double)(totalsal-minsal-maxsal)/(n-2);
    }
};