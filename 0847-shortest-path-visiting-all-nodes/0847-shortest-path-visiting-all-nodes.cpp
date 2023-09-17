class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        int visitedAll = (1<<n) - 1; // set all n-1 bits to 1 indicating all nodes are visited
        queue<pair<int, pair<int, int>>> q;
        vector<vector<int>> visitedPaths(n, vector<int>(visitedAll + 1, 0)); 
        // initialize queue and visitedPaths with all nodes and paths  
        for (int i=0; i<n; i++) {
            int mask = (1<<i);
            q.push({i, {mask, 0}}); // {node, {mask, cost}}
            visitedPaths[i][mask] = 1;
        }
        while (!q.empty()) {
            int node = q.front().first;
            int mask = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();
            if (mask == visitedAll) // if we have visited all nodes in the graph
                return cost;
            // iterate over the adjacent nodes
            for (auto &adj: graph[node]) {
                int newMask = mask | (1 << adj);
                // add to queue 
                // only if we have not visited the same path that ends with this adj node
                if (!visitedPaths[adj][newMask]) {
                    visitedPaths[adj][newMask] = 1;
                    q.push({adj, {newMask, cost + 1}});
                }
            }
        }
        return -1;
    }
};