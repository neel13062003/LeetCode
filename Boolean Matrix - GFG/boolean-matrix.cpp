//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix){
         int n=matrix.size();              //row
        int m=matrix[0].size();           //column
        vector<int>x,y;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        //Row->0
        for(int i=0;i<x.size();i++){
            int index=x[i];
            for(int j=0;j<m;j++){
                matrix[index][j]=1;
            }
        }
        
        //col->0
        for(int i=0;i<y.size();i++){
            int index=y[i];
            for(int j=0;j<n;j++){
                matrix[j][index]=1;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends