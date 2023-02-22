//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n){
        vector<int>a,b;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                b.push_back(arr[i]);
            }else{
                a.push_back(arr[i]);
            }
        }
        for(int i=0;i<a.size();i++){
            arr[i]=a[i];
        }
        int x=a.size();
        for(int i=0;i<b.size();i++){
            arr[x+i]=b[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends