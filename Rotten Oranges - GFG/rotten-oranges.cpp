//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        //BFS Aprach TO Solve Problem
        //{{r,c},t}  = {{row,col},time}
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }else{
                    vis[i][j]=0;
                }
            }
        }
        int dRow[]={-1,0,1,0};
        int dCol[]={0,1,0,-1};
        int tm=0;
        while(!q.empty()){
            int r= q.front().first.first;
            int c= q.front().first.second;
            int t= q.front().second;
            tm=max(tm,t);
            q.pop();
            
            //Then Visiting All Negithbouring gUY & Exactly 4 Neigthbour
            for(int i=0;i<4;i++){
                int nRow=r+ dRow[i];
                int nCol=c+ dCol[i];
                
                if(nRow>=0 && nCol>=0 && nRow<n && nCol<m && vis[nRow][nCol] !=2 && grid[nRow][nCol]==1){
                    q.push({{nRow,nCol},t+1});
                    vis[nRow][nCol]=2;
                }    
            }
        }
        //Last Check
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;        
     }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends