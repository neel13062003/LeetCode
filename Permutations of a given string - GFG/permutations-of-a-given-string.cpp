//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<string> v;
	    void getpermutation(string s, int i, int n)
	    {
	        if(i==n)
	        {
	            v.push_back(s);
	            return;
	        }
	       
	        for(int j=i; j<n;j++)
	        {
	            swap(s[i], s[j]);
	            getpermutation(s, i+1, n);
	            swap(s[i], s[j]);
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    getpermutation(S, 0, S.length());
		    sort(v.begin(), v.end());
		      v.erase(unique(v.begin(), v.end()),v.end());
		    return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends