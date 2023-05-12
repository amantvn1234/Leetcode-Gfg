class Solution {
public:
    bool iscycle(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&dfs,vector<int>&topo){
        visited[node]=true;
        dfs[node]=true;
        for(auto ngb:adj[node]){
            if(!visited[ngb]){
                if(iscycle(ngb,adj,visited,dfs,topo)==true)
                return true;
            }
            else{ // ngb is already visited then check ki kahin ye element path me to nhi using dfsvisited if yes then cycle hai
                if(dfs[ngb]==true)
                return true;
            }
        }
        dfs[node]=false;  // jis call se return kar rahe usse unvisit as this node is no longer in the path
        topo.push_back(node);  // insert node jiska koe child unvisited na ho i.e ab ispe koe depend nhi karta
        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>> adj(n);
        for(int i=0;i<p.size();i++){
            int v=p[i][0],u=p[i][1];
            adj[u].push_back(v);
        }
        vector<bool> visited(n,false),dfsvisited(n,false);
        vector<int> topo;
        for(int i=0;i<n;i++) // for disconnected components
        {   
            if(!visited[i])
            if(iscycle(i,adj,visited,dfsvisited,topo)==true){
                return {}; // if cycle return empty vector
            }
        }
        reverse(topo.begin(),topo.end());
        return topo;
    }
};