class Solution {
public:  // here p2c means possible to complete
    bool p2c(int node,vector<vector<int>>& adj,vector<bool> &visited,vector<bool> &dfsvisited){
        visited[node]=true;
        dfsvisited[node]=true;
        for(auto ngb:adj[node]){
            if(!visited[ngb]){
                 if(p2c(ngb,adj,visited,dfsvisited)==false)  //false means cycle mil gyi so not possible to complete
                 return false;
            }
            else{  // ngb already visited and iski dfs call bhi ho rkhi h
                if(dfsvisited[ngb]==true){
                    return false;  // cycle mil gyi so not possible to complete
                }
            }
        }
        dfsvisited[node]=false;  // just before returning dfs call
        return true; // es node ke neighbours me cycle na h so possible to complete
    }
    bool canFinish(int numcourses, vector<vector<int>>& prerequisites) {
       vector<vector<int>> adj(numcourses);
       for(int i=0;i<prerequisites.size();i++){
           int u=prerequisites[i][0],v=prerequisites[i][1];
          adj[v].push_back(u);
       }
       vector<bool> visited(numcourses),dfsvisited(numcourses);
        for(int i=0;i<numcourses;i++){
            if(!visited[i]){
                bool p2complete=p2c(i,adj,visited,dfsvisited);
                if(p2complete==false)
                return false;
            }
        }
        return true;
    }
};