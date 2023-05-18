class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n,0),startnode;
       for(int i=0;i<edges.size();i++){
            indegree[edges[i][1]]++;
        }

        for(int i=0;i<n;i++){
            if(indegree[i]==0)
            startnode.push_back(i);
        }
        return startnode;
    }
};