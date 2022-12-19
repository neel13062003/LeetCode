class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> mp;
        for(auto& i: edges)
        {
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        queue<int> q;
        q.push(source);
        vector<bool> flag(n,false);
        while(!q.empty())
        {
            int c=q.front();
            q.pop();
            if(c==destination) return true;
            for(auto& i:mp[c])
            {
                if(!flag[i])
                {
                    q.push(i);
                    flag[i]=true;
                }
            }   
        }
        return false;
    }
};