class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        int full_mask = (1 << n) - 1; // to check if all nodes are visited
        vector<vector<int>> dist(n, vector<int>(1 << n, INT_MAX)); // dist[i][mask] stores distance of i from start node and set of visited nodes is represented by mask
        queue<pair<int, int>> q; // stores node and set of visited nodes
        
        // add all nodes with initial state to the queue
        for (int i = 0; i < n; i++) {
            q.push({i, 1 << i});
            dist[i][1 << i] = 0; // distance of i from i is 0
        }
        
        while (!q.empty()) {
            int curr = q.front().first;
            int mask = q.front().second;
            q.pop();
            
            if (mask == full_mask) // all nodes have been visited
                return dist[curr][mask];
            
            for (int next : graph[curr]) {
                int next_mask = mask | (1 << next);
                if (dist[next][next_mask] > dist[curr][mask] + 1) {
                    dist[next][next_mask] = dist[curr][mask] + 1;
                    q.push({next, next_mask});
                }
            }
        }
        return -1;
    }
};
