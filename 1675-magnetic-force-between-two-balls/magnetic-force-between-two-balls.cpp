class Solution {
public:
 bool ispossible(vector<int>& s,int dist,int m){
     int count=1,st=0,end=0,n=s.size();
     while(end<n){
         if(s[end]-s[st]>=dist){
             st=end;
             count++;
         }
         end++;
     }
    return count>=m;
 }
    int maxDistance(vector<int>& s, int m) {
 // applying binary search on distance 
        sort(s.begin(),s.end());
        
     int n=s.size(),st=0,end=s[n-1]-s[0],ans;
     while(st<=end){
         int mid=st+(end-st)/2;
         if(ispossible(s,mid,m)){
             ans=mid;
             st=mid+1;
         }
         else{
             end=mid-1;
         }
     }
        
        return ans;
        // tc:O(nlogn) for sorting  sc:O(1)
    }
};