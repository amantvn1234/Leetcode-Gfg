class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
       
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            long long x1=bombs[i][0],y1=bombs[i][1],r1=bombs[i][2];
            for(int j=0;j<n;j++){
                if(j!=i){
                long long x2=bombs[j][0],y2=bombs[j][1],r2=bombs[j][2];
                if(pow(abs(x2-x1),2)+pow(abs(y2-y1),2)<=pow(r1,2)){
                adj[i].push_back(j);
                }
                }

            }
        }

        for(int i=0;i<n;i++){
            cout<<i<<" -> ";
            for(int j=0;j<adj[i].size();j++){
                cout<<adj[i][j]<<' ';
            }
            cout<<endl;
        }
      
       
         
        // bfs for all components and find the component having the maximum no. of elements
        int maxdetonate=0,detonate;
        for(int i=0;i<n;i++){
             queue<int> q;
             vector<bool> visited(n,false);
               detonate=1;
                q.push(i);
                visited[i]=true;
                while(q.size()){
                    int front=q.front();
                    q.pop();
                    for(auto ngb:adj[front]){
                        if(!visited[ngb]){
                            q.push(ngb);
                            visited[ngb]=true;
                            detonate++;
                        }
                    }
                }
            
            maxdetonate=max(maxdetonate,detonate);
        }
        return maxdetonate;
    }
};