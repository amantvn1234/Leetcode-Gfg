class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int> toposort;
        vector<int> indegree(n,0);
        vector<vector<int>> adj(n);

        for(int i=0;i<p.size();i++){
            int v=p[i][0],u=p[i][1];
            adj[u].push_back(v); // creating adj list
            indegree[v]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
            q.push(i);
        }
        while(q.size()){
            int front=q.front();
            q.pop();
            toposort.push_back(front);
            for(auto ngb:adj[front]){
                if(--indegree[ngb]==0)
                q.push(ngb);
            }
        }
        if(toposort.size()==n)
        return toposort;
        return {}; // if unable to take courses due to cycle (i.e. interdependency of prerequisites courses)
    }
};