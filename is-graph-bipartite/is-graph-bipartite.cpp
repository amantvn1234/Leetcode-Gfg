class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int> color(v,-1);
        

        queue<int> q;
        for(int i=0;i<v;i++){  // for disconnected component
                if(color[i]==-1) // i.e. not visited 
                {
                    q.push(i);
                    color[i]=0;  // start new component ka node i by colouring it with 0;
                    while(q.size()){
                    int front=q.front();
                    q.pop();
                    for(auto ngb:graph[front]){
                        if(color[ngb]==-1){ // unvisited
                        q.push(ngb);
                        color[ngb]=1-color[front];
                        }
                        else{  // already visited
                            if(color[ngb]==color[front]){  // if they have same color means they are in same group and they have edge b/w them
                            return false;
                            }
                    }
                }
            }
            }
        }
        return true;
    }
};