class Solution {
    private:
    bool dfs(int node,int col,int color[],vector<vector<int>>& adj)
    {
        color[node] = col;

        for(auto it : adj[node])
        {
            if(color[it] == -1)
            {
                if(dfs(it,!col,color,adj) == false) return false;
            }
            else if(color[it] == col) return false;
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v = graph.size();
        int color[v];
        for(int i=0;i<v;i++) color[i] = -1;

        for(int i=0;i<v;i++)
        {
            if(color[i] == -1)
            {
                if(dfs(i,0,color,graph) == false) return false;
            }
        }
    return true;
    }
};