//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
            vector<int>a;
            vector<int>b;
            vector<int>c;
            
            for(int i=0;i<n1;i++){
                a.push_back(A[i]);
            }
            for(int i=0;i<n2;i++){
                b.push_back(B[i]);
            }
            for(int i=0;i<n3;i++){
                c.push_back(C[i]);
            }
            
            vector<int>v1;
            vector<int>v2;
            
            set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(v1));
            set_intersection(v1.begin(),v1.end(),c.begin(),c.end(),back_inserter(v2));
            
            set<int>s;
            for(int i=0;i<v2.size();i++){
                s.insert(v2[i]);
            }
             vector<int>ans;
                for(auto it:s){
                    ans.push_back(it);
                }
            
            return ans;
            
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends