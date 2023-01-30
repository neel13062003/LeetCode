class Solution {
    
private:
    void dfs(vector<int>adjList[],int vis[],int node){
        vis[node]=1;
        for(auto it:adjList[node]){
            if(!vis[it]){
                dfs(adjList,vis,it);
            }
        }
    }
    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V= isConnected.size();
        //1) Convert Adjceny Matrix To Ajcency List
        vector<int> adjList[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 &&  i!=j){
                     adjList[i].push_back(j);
                     adjList[j].push_back(i); 
                }
            }
        }
        int vis[210]={0};
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(adjList,vis,i);
            }
        }
        return count;
    }
};