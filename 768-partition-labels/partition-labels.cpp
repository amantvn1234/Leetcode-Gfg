class Solution {
public:
   vector<int> partitionLabels(string s) {
    vector<pair<int,int>>index(26,{INT_MAX,INT_MIN});
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        index[s[i]-'a'].first=min(index[s[i]-'a'].first,i);
        index[s[i]-'a'].second=max(index[s[i]-'a'].second,i);            
    }
    
    vector<pair<int,int>>mergeInterval;
    for(int i=0;i<26;i++){
        if(index[i].first!=INT_MAX ){
            mergeInterval.push_back(index[i]);
        }
    }
    
    sort(mergeInterval.begin(),mergeInterval.end());
    //Now Time to merge
    vector<int>ans;
    
    int start=mergeInterval[0].first, end=mergeInterval[0].second;
    
    for(int i=1;i<mergeInterval.size();i++){
        
        //If it lies in the current part
        if(mergeInterval[i].first<=end){
            start=min(start,mergeInterval[i].first);
            end=max(end,mergeInterval[i].second);
        }
        else {
            ans.push_back(end-start+1);
            start=mergeInterval[i].first;
            end=mergeInterval[i].second;
        }
    }
    ans.push_back(end-start+1);
    return ans;    
}
// Tc:O(n)+O(26log(26))   SC: O(26)
};