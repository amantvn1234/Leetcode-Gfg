class Solution {
public: 
  bool ispossible(vector<int> &w,int cap,int days){
      int count=0,currweight=0;
      for(int i=0;i<w.size();i++){
          if(currweight+w[i]<=cap){
              currweight+=w[i];
          }
          else{
              currweight=w[i];
              count++;
          }
      }
      if(currweight>0)
      count++;
      return count<=days;

  }
    int shipWithinDays(vector<int>& w, int days) {
        int min=*max_element(w.begin(),w.end()),max=1e9,ans;

        // apply binary search on ans (which is minimum weight possible)

        while(min<=max){
            int mid=min+(max-min)/2;
            if(ispossible(w,mid,days)){
                ans=mid;
                max=mid-1;
            }
            else{
                min=mid+1;
            }
        }
        return ans;
    }
};