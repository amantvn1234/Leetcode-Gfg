class Solution {
public:
 bool dfs(int node,vector<vector<int>>& graph,vector<int> &color){
      for(auto ngb:graph[node]){
          if(color[ngb]==-1){
              color[ngb]=1-color[node];
              if(dfs(ngb,graph,color)==false)
              return false;
          }
          else{
              if(color[ngb]==color[node])
              return false;
          }
      }
      return true;
  }
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> color(v,-1);
        
        for(int i=0;i<v;i++){
            if(color[i]==-1){
                color[i]=0;
                if(dfs(i,graph,color)==false)
                  return false;
            }
        }
        return true;
    }
};