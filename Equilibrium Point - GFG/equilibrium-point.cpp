//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        //int x= sizeof(a[])/sizeof(a[0]);
           long long left[n] = {0};
           long long right[n] = {0};
           int sum = 0;
           int sum1 = 0;
           for (int i = 0; i < n; i++)
           {
              sum = sum + arr[i];
              left[i] = sum;
           }
        
           for (int i = n - 1; i >= 0; i--)
           {
              sum1 = sum1 + arr[i];
              right[i] = sum1;
           }
        
        
           for (int i = 0; i < n; i++)
           {
              if (left[i] == right[i])
              {
                 return i+1;
              }
           }
        
           return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends