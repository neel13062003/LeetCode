//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution{
    public:
    int partition (int nums[], int low, int high){
        if(low>=high) return -1;
        int pivot=low,l=pivot+1,r=high;
        while(l<=r){
            if(nums[l]<nums[pivot]) l++;
            else if(nums[r] >=nums[pivot]) r--;
            else swap(nums[l],nums[r]);
        }
        swap(nums[pivot],nums[r]);
        return r;
    }
    
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int nums[], int low, int high){
        if(low>=high) return;
        int pivot=partition(nums,low,high);
        quickSort(nums,low,pivot);
        quickSort(nums,pivot+1,high);
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends