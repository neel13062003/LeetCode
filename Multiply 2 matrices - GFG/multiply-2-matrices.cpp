//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        //Row
        int n1=matrixA.size();
        int n2=matrixB.size();
        //Col
        int m1=matrixA[0].size();
        int m2=matrixB[0].size();
         vector<vector<int>>ans;
        if(m1==n2){
            for(int i=0;i<n1;i++){
                vector<int>temp;
                for(int j=0;j<m2;j++){
                    int sum=0;
                    for(int k=0;k<m1;k++){
                        sum=sum+ matrixA[i][k]*matrixB[k][j];
                    }
                    temp.push_back(sum);
                }
                ans.push_back(temp);
            }
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                matrixA[i][j]=ans[i][j];
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends