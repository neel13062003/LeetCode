//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    //Static because inside class
    static bool cmp(pair<int,int>&A,pair<int,int>&B){
        return A.second<B.second || (A.second==B.second && A.first<B.first);
    }
    
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({start[i],end[i]});
        }
        sort(vec.begin(),vec.end(),cmp);
        int count=1;
        int start1 = vec[0].first;
        int end1 = vec[0].second;
        
        for(int i=1;i<n;i++){
            if(end1 < vec[i].first){
                end1 = vec[i].second;
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends