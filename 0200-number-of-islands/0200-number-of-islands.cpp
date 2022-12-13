class Solution {
public:
    
    void  make_current_icelands(vector<vector<char>>&grid,int i,int j,int rows,int cols){
        
        //Boundary Case
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]!='1') return;
        
        grid[i][j]='2';
        
        //Make Recursive Call in Adjcent Edges
         make_current_icelands(grid,i+1,j,rows,cols);      //Down
         make_current_icelands(grid,i,j+1,rows,cols);     //Right
         make_current_icelands(grid,i-1,j,rows,cols);     //Top
         make_current_icelands(grid,i,j-1,rows,cols);     //Left
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        //For Fast I/O Operation
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int rows=grid.size();
        int cols=grid[0].size();
        if(rows==0) return 0;
        
        int no_of_icelands = 0;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    make_current_icelands(grid,i,j,rows,cols);
                    no_of_icelands += 1;
                }
            }
        }
        
        return no_of_icelands;
    }
};