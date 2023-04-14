class Solution {
public:
    
    
        void makeSet(vector<int>& parent, vector<int>& rank, int n) {
            for (int i = 0; i < n; i++) {
                parent[i] = i;
                rank[i] = 0;
            }
        }

        int findParent(vector<int>& parent, int node) {
            if (parent[node] == node) return node;
            return parent[node] = findParent(parent, parent[node]);
        } 

        void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
            u = findParent(parent, u);
            v = findParent(parent, v);
            if (rank[u] < rank[v]) {
                parent[u] = v;
            } else if (rank[u] > rank[v]) {
                parent[v] = u;
            } else {
                parent[v] = u;
                rank[u]++;
            }
        }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<vector<int>> edges;
        
        // Calculate the Manhattan distance between each pair of points
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int dist = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                edges.push_back({i, j, dist});
            }
        }
        
        // Find the minimum spanning tree using Kruskal's algorithm
        sort(edges.begin(), edges.end(), [](vector<int>& a, vector<int>& b) {
            return a[2] < b[2];
        });
        
        vector<int> parent(n);
        vector<int> rank(n);
        makeSet(parent, rank, n);
        
        int minCost = 0;
        int numEdges = 0;
        
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            
            if (findParent(parent, u) != findParent(parent, v)) {
                minCost += wt;
                unionSet(u, v, parent, rank);
                numEdges++;
            }
            
            if (numEdges == n-1) break;
        }
        
        return minCost;
    }
};
