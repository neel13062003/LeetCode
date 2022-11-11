//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    void selectionSort(int nums[], int n){
       int minInd,startInd,currInd,size=n;
       if(size<=1) return;
       for(startInd=0;startInd<size-1;startInd++){
          for(currInd=startInd+1 ,minInd=startInd; currInd<size ;currInd ++)
              if (nums[minInd] > nums[currInd])
				minInd = currInd;
		if (minInd != startInd)
			swap(nums[startInd], nums[minInd]);
       }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends