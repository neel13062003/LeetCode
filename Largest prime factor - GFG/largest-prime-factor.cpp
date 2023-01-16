//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    
    vector<int> primeFactors(int n){
        // Print the number of 2s that divide n
        vector<int >ans;
        while (n % 2 == 0)
        {
            //cout << 2 << " ";
            ans.push_back(2);
            n = n/2;
        }
    
        // n must be odd at this point. So we can skip
        // one element (Note i = i +2)
        for (int i = 3; i*i <= n; i = i + 2)      // i*i<=n instead of i<=sqrt(n)
        {
            // While i divides n, print i and divide n
            while (n % i == 0)
            {
                //cout << i << " ";
                ans.push_back(i);
                n = n/i;
            }
        }
    
        // This condition is to handle the case when n
        // is a prime number greater than 2
        if (n > 2){
            //cout << n << " ";
            ans.push_back(n);
        }
        return ans;
            
    }

    long long int largestPrimeFactor(int N){
        vector<int>ans= primeFactors(N);
        reverse(ans.begin(),ans.end());
        long long int a= ans[0];
        return a;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends