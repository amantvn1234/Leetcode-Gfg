class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
       vector<int> st;
       for(int i=0;i<a.size();i++){
           if(st.empty()||a[i]>0){
               st.push_back(a[i]);
           }
           else{
        while(!st.empty()&&st.back()>0&&abs(st.back())<abs(a[i])){
               st.pop_back();
           }
           if(!st.empty()&&st.back()>0&&abs(st.back())==abs(a[i]))
           st.pop_back();
           else if(st.empty()||st.back()<0)
           st.push_back(a[i]);
           }
           
       } 
      
          return st;
    }
};