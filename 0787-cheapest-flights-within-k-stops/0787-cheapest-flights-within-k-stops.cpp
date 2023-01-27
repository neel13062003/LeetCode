class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<map<int, int>> links(n, map<int, int>());
        for (auto& flight : flights)
        {
            links[flight[0]][flight[1]] = flight[2];
        }
        int i = k;
        queue<pair<int, int>> q;
        // stop, cost
        q.push(pair<int,int>(src, 0));
        int cost = INT_MAX;
        vector<int> costs(n, INT_MAX);
        costs[src] = 0;
        while (!q.empty() && i >= 0)
        {
            int s = q.size();
            for (int j = 0; j < s; j++)
            {
                auto from = q.front();
                q.pop();
                for (auto& flight : links[from.first])
                {
                    if (costs[flight.first] > from.second + flight.second)
                    {
                        costs[flight.first] = from.second + flight.second;
                        q.push(pair(flight.first, from.second + flight.second));
                    }
                }
            }
            i--;
        }
        return costs[dst] == INT_MAX ? -1 : costs[dst];
    }
};