class Solution {
public:
    bool isvalid(int i,int j,int r,int c){
        if(i>=0&&i<r&&j>=0&&j<c){
            return true;
        }
        return false;
    }

    void bfs(vector<vector<bool>> & visited,int i,int j,vector<vector<char>> &grid){
        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j]=true;
        vector<pair<int,int>> ngb={{0,1},{1,0},{0,-1},{-1,0}};
        while(q.size()){
            pair<int,int> top=q.front();
            q.pop();
            int i=top.first,j=top.second;
            for(auto n:ngb){  //finding right ngb storing in queue if it is 1 and unvisited
                int u=i+n.first,v=j+n.second;
                if(isvalid(u,v,grid.size(),grid[0].size())&&grid[u][v]=='1'){
                    if(!visited[u][v]){
                        q.push({u,v});
                        visited[u][v]=true;
                    }
                    
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size(),c=grid[0].size(),island=0;
        vector<vector<bool>> visited(r,vector<bool>(c,false));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'&&!visited[i][j]){
                    bfs(visited,i,j,grid);
                    island++;
                }
            }
        }
        return island;
    }
};