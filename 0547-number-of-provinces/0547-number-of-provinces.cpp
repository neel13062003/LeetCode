class Solution {
private:
  void dfs(int node,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        for(auto it : adj[node]){
             if(!vis[it]){
                   dfs(it,adj,vis);
             }
        }
  }
public:
     //Number of Total Connected Component
    int findCircleNum(vector<vector<int>>& isConnected) {
        //Matrix --> Adjency List
        int v = isConnected.size();
        vector<int>adj[v];
        for(int i=0;i<v;++i){
            for(int j=0;j<v;++j){
                if(isConnected[i][j]==1 && i!=j){
                      adj[i].push_back(j);
                      adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(v,0);
        int count=0;
        for(int i=0;i<v;++i){
             if(!vis[i]){
                 dfs(i,adj,vis);
                 count++;
             }
        }
        return count;
    }  
};

// //vector<int>adj[] (Can Store vector of array) = vector<vector<int>>&adj
// class Solution {
// private:
//     //Here I not pass 3rd Argument Becasue my task in only count not print dfs.
//     void dfs(int node,vector<vector<int>>&adj,vector<int>&vis){
//         vis[node]=1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfs(it,adj,vis);
//             }
//         }
//     }
    
// public:
   
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int V = isConnected.size();
//         // vector<int> adj(V);
//         vector<vector<int>> adj(V);
        
//         for(int i=0;i<V;i++){
//             for(int j=0;j<V;j++){
//                 if(i!=j && isConnected[i][j]==1){
//                     adj[i].push_back(j);
//                     adj[j].push_back(i);
//                 }
//             }
//         }
        
//         int count=0;
//         vector<int>vis(0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                   dfs(i,adj,vis);
//                   count++;
//             }     
//         }
//         return count;
//     }
// };