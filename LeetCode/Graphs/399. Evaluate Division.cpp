class Solution {
public:
    unordered_map<string, unordered_map<string, double>> adj;
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        for(int i=0;i<equations.size();++i)
        {
            string u = equations[i][0], v = equations[i][1];
            double w = values[i];
            adj[u][v] = w;
            adj[v][u] = 1.0 / w;
        }

        vector<double> result;
        for(auto q : queries)
        {
            string src = q[0], dest = q[1];
            if(!adj.count(src) || !adj.count(dest)) result.push_back(-1.0);
            else if(src == dest) result.push_back(1.0);
            else
            {
                unordered_map<string,bool> vis;
                double res = -1.0;
                dfs(src,dest,res,vis);
                result.push_back(res);
            }
        }
        return result;
    }

    bool dfs(string src,string target,double&num,unordered_map<string,bool>& visited)
    {
        visited[src] = 1;
        for(auto n : adj[src])
        {
            if(n.first == target) 
            {
                num = n.second;
                return true;
            }
            else if(!visited[n.first])
            {
                if(dfs(n.first,target,num,visited))
                {
                    num *= n.second;
                    return true;
                }
            }
        }
        return false;
    }
};