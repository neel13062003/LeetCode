class Solution {
 private:
    void dfs(int node,vector<int> adjList[],int vis[]){
        vis[node]=1;
        for(auto it:adjList[node]){
            if(!vis[it]){
                dfs(it,adjList,vis);
            }
        }
    }
  public:
    int findCircleNum(vector<vector<int>> adj) {
        int V=adj.size();
        //Adjcency Metrix is Given
        vector<int> adjList[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(i!=j && adj[i][j]==1){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        //Above We creating Adjceny list from given adjceny metrix
        int vis[200]={0};
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                
                dfs(i,adjList,vis);           //dfs(starting node,adjcey list,visited);
                count++;
            }
        }
        
        return count;
    }
};