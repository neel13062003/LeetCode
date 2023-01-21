class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //create an adjacency list
        unordered_map<int , set<int> > adj;

        for(int i = 0 ; i < trust.size() ; i++){
            int u = trust[i][0];
            int v = trust[i][1];

            adj[u].insert(v);
        }

        map<int , int> mp;
        for(auto i : adj){
            for(auto j : i.second){
                cout<<j<<","<<endl;
                mp[j]++;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(adj[i+1].size()==0 && mp[i+1] == n-1)
                return i+1;
        }

        return -1;
    }
};