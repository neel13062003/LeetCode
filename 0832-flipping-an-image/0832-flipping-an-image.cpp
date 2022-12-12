class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        int n =m;
        if(n%2 != 0){
            for(int i=0;i<m;i++){
                for(int j=0;j<n/2;j++){
                      int x=n/2;
                      if(j != x) swap( image[i][j],image[i][n-j-1] );   
                }
            }
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                      if(image[i][j]==0) image[i][j]=1;
                      else if(image[i][j]==1) image[i][j]=0;
                }
            }    
        }else{
            for(int i=0;i<m;i++){
                for(int j=0;j<n/2;j++){
                      swap( image[i][j],image[i][n-j-1] );   
                }
            }
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                      if(image[i][j]==0) image[i][j]=1;
                      else if(image[i][j]==1) image[i][j]=0;
                }
            }
        }
        return image;
    }
};



/*    
2)//Given   
1 1 0 0
1 0 0 1
0 1 1 1
1 0 1 0
 
//First Reverse Each Row    
0 0 1 1
1 0 0 1
1 1 1 0
0 1 0 1
    
//Invert Image
1 1 0 0
0 1 1 0
0 0 0 1
1 0 1 0
    
    
    
    
1) //Given
1 1 0
1 0 1
0 0 0
 
//First Reverse Each Row    
0 1 1
1 0 1
0 0 0
    
//Invert Image
1 0 0
0 1 0
1 1 1
*/
    
    