class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int pcount=0,i=0,j=0,n;
       map<int,int> c,l;
       vector<pair<int,int>> coming,leaving;
    
        for(int i=0;i<trips.size();i++){
            c[trips[i][1]]+=trips[i][0];
            l[trips[i][2]]+=trips[i][0];

        }
        for(auto i:c){
                coming.push_back({i.first,i.second});
        }
        for(auto i:l){
            leaving.push_back({i.first,i.second});
        }

        n=coming.size();
        while(i<n){                        // i is pointing to incoming train and j is pointing to last passenger who is present on station
            if(coming[i].first<leaving[j].first){
                pcount+=coming[i].second;
                i++;
                if(pcount>capacity)
                return false;
            }
            else if(coming[i].first==leaving[j].first){
                pcount+=coming[i].second;
                pcount-=leaving[j].second;
                i++,j++;
                if(pcount>capacity)
                return false;
            }
            else{
                pcount-=leaving[j].second;
                j++;
            }
        }
        return true;

        //TC: O(n+nlogn)   two pointer +sorting    SC:O(n)
    }
};