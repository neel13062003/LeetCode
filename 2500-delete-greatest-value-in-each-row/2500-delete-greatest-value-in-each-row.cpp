class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0,p,q;
        int maxi=0,maxi2=-1;
        int x=grid[0].size();
        while(x--){
            maxi2=-1;
            for(int i=0;i<grid.size();i++){
                maxi=0;
                for(int j=0;j<grid[0].size();j++){
                    if(maxi<grid[i][j]) {
                         maxi=grid[i][j];
                         p=i , q=j;
                    }
                }
                grid[p][q]=0;
                if(maxi2<maxi){
                    maxi2=maxi;
                }
            }
            sum=sum+maxi2;
        }
        return sum;
    }
};