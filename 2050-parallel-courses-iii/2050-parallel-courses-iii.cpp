class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>adj[n];
        vector<int>indegree(n, 0);
        for(auto &it:relations){
            int u=it[0]-1;
            int v=it[1]-1;
            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<int>q;
        vector<int>maxi(n);
        for(int i=0; i<n; i++){
            if(indegree[i]==0) q.push(i);
            maxi[i]=time[i];
        }

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(auto &it:adj[node]){
                maxi[it]=max(maxi[it], time[it]+maxi[node]);
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }

        return *max_element(maxi.begin(), maxi.end());
        
    }
};