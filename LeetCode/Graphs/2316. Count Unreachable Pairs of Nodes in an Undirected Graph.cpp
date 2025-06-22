class Solution {
public:

    void dfs(int node,vector<vector<int>>& graph,vector<bool>& vis, long long& size)
    {
        vis[node] = true;
        size++;

        for(int m : graph[node])
        {
            if(!vis[m])
            {
                dfs(m,graph,vis,size);
            }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        if(n == 1) return 0;
        long long count = 0;

        vector<vector<int>> graph(n);
        for(const auto& edge : edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<bool> vis(n,false);
        long long sum = 0;

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                long long size = 0;
                dfs(i,graph,vis,size);
                count += size*sum;
                sum += size;
            }
        }
        return count;
    }
};