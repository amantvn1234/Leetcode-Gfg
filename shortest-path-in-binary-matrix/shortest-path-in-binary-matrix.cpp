class Solution {
public:
bool isvalid(int i,int j ,int n){
    if(i>=0&&i<n&&j>=0&&j<n)
    return true;
    return false;
}
    int bfs(vector<vector<int>> &adj,int node,int n,vector<bool>&visited){
       queue<int> q;
       vector<int> parent(n*n,-1);
       parent[0]=-1;
       q.push(0);
       int count=0;
       visited[0]=true;
       while(q.size()){
           int front=q.front();
           q.pop();
           
           for(auto ngb:adj[front]){
               if(!visited[ngb]){
                   q.push(ngb);
                   visited[ngb]=true;
                   parent[ngb]=front;
                  }
                  if(visited[n*n-1]) break;
           }
           }
           if(parent[n*n-1]==-1)
        return -1;
        else{
            int dest=n*n-1;
            while(dest!=0){
                count++;
                dest=parent[dest];
            }
        }
        return count+1;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<bool> visited(n*n,false);
        vector<vector<int>> adj(n*n);
        vector<pair<int,int>> ngbs={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    for(int k=0;k<8;k++){
                        int a=i+ngbs[k].first,b=j+ngbs[k].second;
                        if(isvalid(a,b,n)&&grid[a][b]==0){
                            int u=n*i+j,v=n*a+b;
                            adj[u].push_back(v);
                            // adj[v].push_back(u);
                        }
                    }
                }
            }
        }
        // for(auto i:adj){
        //     cout<<"-> ";
        //     for(auto ngb:i){
        //         cout<<ngb<<' ';
        //     }
        //     cout<<endl;
        // }
        if(n==1&&grid[0][0]==0)
        return 1;
        return bfs(adj,0,n,visited);
    }
};