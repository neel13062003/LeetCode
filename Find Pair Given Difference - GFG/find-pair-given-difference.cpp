//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


/*
#include<bits/stdc++.h>
bool findPair(int arr[], int size, int n){
    unordered_map<int,bool> mp;
    for(int i=0;i<size;i++) mp[arr[i]] = true;
    if(!n)
    {
        set<int>st;
        for(int i=0;i<size;i++)    st.insert(arr[i]);
        return (st.size() != size);
    }
    for(int i=0;i<size;i++)
        if(mp[abs(n-arr[i])])
            return true;
    return false;
    
}*/

bool find(int a[], int l, int u, int e){
    int mid=(l+u)/2;
    if(l>u) return false;
    else if(a[mid]<e){
        return find(a, mid+1, u, e);
    }
    else if(a[mid]>e){
        return find(a, l, mid-1, e);
    }
    else return true;
}

bool findPair(int arr[], int size, int n){
    //code
    sort(arr, arr+size);//O(L*log(L))
    for(int k=0; k<size-1; k++){
        if(find(arr, k+1, size-1, n+arr[k])) return true;//O(log(L))
    }//O(L*log(L))
    return false;
}