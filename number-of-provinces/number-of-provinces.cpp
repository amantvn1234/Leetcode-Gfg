class Solution {
public:
   
    void bfs(int node,vector<bool> &visited,vector<vector<int>>& isc){
        queue<int> q;
        q.push(node);
        visited[node]=true;
        while(q.size()){
            int front=q.front();
            q.pop();
            for(int i=0;i<isc.size();i++){ // access all ngbs
                if(isc[front][i]==1&&!visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isc) {
        int n=isc.size(),component=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(i,visited,isc);
                component++;
            }
        }
        return component;
    }
};