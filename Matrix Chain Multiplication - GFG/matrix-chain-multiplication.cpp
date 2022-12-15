//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int f(int i, int j, int arr[], vector<vector<int>>& dp){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int res = INT_MAX;
        for(int k=i;k<j;k++){
            res = min(res, arr[i-1]*arr[k]*arr[j] + f(i, k, arr, dp) + f(k+1, j, arr, dp));
        }
        return dp[i][j] = res;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> dp(N, vector<int>(N, -1));
        return f(1, N-1, arr, dp);
        
    }



     /*
     // int f(int i, int j, int arr[], vector<vector<int>>& dp){
    //     if(i==j) return 0;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int res = INT_MAX;
    //     for(int k=i;k<j;k++){
    //         res = min(res, arr[i-1]*arr[k]*arr[j] + f(i, k, arr, dp) + f(k+1, j, arr, dp));
    //     }
    //     return dp[i][j] = res;
    // }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> dp(N, vector<int>(N, 0));
        for(int i=N-1;i>0;i--){
            for(int j=i+1;j<N;j++){
                int res = INT_MAX;
                for(int k=i;k<j;k++) res = min(res, arr[i-1]*arr[k]*arr[j] + dp[i][k] + dp[k+1][j]);
                dp[i][j] = res;
            }
        }
        return dp[1][N-1];
        
    }*/



    /*
    int dp[100][100];
    int MatrixChainMemoized(int arr[],int i,int j){
        if(i==j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        dp[i][j]=INT_MAX;
        for(int k=i;k<j;k++){
            dp[i][j]=min(dp[i][j], MatrixChainMemoized(arr,i,k) + MatrixChainMemoized(arr,k+1,j) +
                  arr[i-1]*arr[k]*arr[j]);
        }
        return dp[i][j];
    }

    int matrixMultiplication(int N, int arr[]){
        int i=1,j=N-1;
        cout<<MatrixChainMemoized(arr,i,j);
    }*/
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends