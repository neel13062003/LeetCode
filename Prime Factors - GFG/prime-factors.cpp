//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	
	vector<int>AllPrimeFactors(int N) {
	    vector<int>ans;
	    while(N%2==0){
	        ans.push_back(2);
	        N=N/2;
	    }
	    for(int i=3;i*i<=N;i=i+2){
	        while(N%i==0){
	            ans.push_back(i);
	            N=N/i;
	        }
	    }
	    if(N>2){
	        ans.push_back(N);
	    }
	    set<int>s;
	    for(int i=0;i<ans.size();i++){
	        s.insert(ans[i]);
	    }
	    vector<int>ans1;
	    for(auto it=s.begin();it!=s.end();it++){
	        ans1.push_back(*it);
	    }
	    return ans1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends