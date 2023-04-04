//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
 

int countValues (int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<countValues(n)<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method */
int countValues (int n)
{
    // int countV = 0;
 
    // // Traverse all numbers from 0 to n and
    // // increment result only when given condition
    // // is satisfied.
    // for (int i=0; i<=n; i++ )
    //     if ((n+i) == (n^i) )
    //         countV++;
 
    // return countV;
    int unset_bits=0;
    while(n){
        if((n&1)==0)
            unset_bits++;
        n=n>>1;
    }
    return 1<<unset_bits;
}
 