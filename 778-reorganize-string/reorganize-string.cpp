class Solution {
public:
    string reorganizeString(string s) {
        vector<int> freq(26,0);

        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }

        priority_queue<pair<int,char>> pq;

        for(int i=0;i<26;i++){
            if(freq[i]){
                pq.push({freq[i],i+'a'});
            }
        }


        string ans="";

        
            
           //  pq.top().first-=1; we cannot update
           auto tmp=pq.top();
           pq.pop();
           ans+=tmp.second;
           if(tmp.first>1){
               tmp.first--;
              pq.push(tmp); 
           }
           
        
        int size=1;
        while(pq.size()){
          auto p=pq.top();
          pq.pop();
          if(p.second==ans[size-1]){
              if(pq.empty()){
                  return "";
              }
              else{
                  auto q=pq.top();
                  pq.pop();
                  ans+=q.second;
                  if(q.first>1){
                      q.first--;
                      pq.push(q);
                  }
                  pq.push(p);
              }
          }
          else{
              ans+=p.second;
             if(p.first>1){
                 p.first--;
                pq.push(p);
             }
          }
          size++;
        }
        // TC:O(n*log(26))   SC: O(26)
        return ans;
    }
};