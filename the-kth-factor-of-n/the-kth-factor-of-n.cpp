class Solution {
public:
    int kthFactor(int n, int k) {
       set<int> factors;
       for(int i=1;i*i<=n;i++){
           if(n%i==0){
               factors.insert(i);
               factors.insert(n/i);
           }
       }
    if(factors.size()<k)
    return -1;
    auto it=factors.begin();
    while(--k>=1){
     it++;
    }
    return *it;
    }
};