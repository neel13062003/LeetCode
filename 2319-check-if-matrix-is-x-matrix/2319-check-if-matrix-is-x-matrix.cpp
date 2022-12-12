class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int p=0;
        
         //priciple diagonal
        for(int i=0,j=0; i<n && j<n; i++,j++){
            if(grid[i][j]== 0){
                 p=1; break;    
            }       
        }
        
        //secondary diagonal
        for(int i=0,j=n-1; i<n && j>=0 ;i++,j--){
            if(grid[i][j]== 0){
                 p=1; break; 
            }
        }
        
        
        //priciple diagonal
        for(int i=0,j=0; i<n && j<n; i++,j++){
            grid[i][j]=0; 
          
        }
        
        //secondary diagonal
        for(int i=0,j=n-1; i<n && j>=0 ;i++,j--){
            grid[i][j]=0; 
        }
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != 0){
                  p=1;break;  
                } 
            }
            if(p==1){
                break;
            }
        }
        if(p==1) return false;
        else return true;  
    }
};


