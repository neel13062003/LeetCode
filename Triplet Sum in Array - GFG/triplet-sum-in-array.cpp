//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        sort(arr,arr+n);
        for(int i=1;i<n-1;i++){
            int start=0;
            int end=n-1;
            while(start<i && i<end){
                if(arr[i]+arr[start]+arr[end]==X)
                return true;
                if((arr[i]+arr[start]+arr[end])>X)
                end--;
                else
                start++;
            }
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends