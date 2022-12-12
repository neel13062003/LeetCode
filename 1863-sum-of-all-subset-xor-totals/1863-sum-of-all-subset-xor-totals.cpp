/*
odd+ even = sum
odd+ odd = sub
even+even= sub
*/
/*
Complexity
Time complexity:
O(2 ^ n), where n is the number of elements in the array

Space complexity:
O(1)

Code*/

class Solution {
public:
    void xorSum(vector<int> &arr,int n,int &ans,int xorVal,int idx){
        if(idx == n){
            ans += xorVal;
            return;
        }

        xorSum(arr,n,ans,xorVal ^ arr[idx],idx + 1);

        xorSum(arr,n,ans,xorVal,idx + 1);
    }
    int subsetXORSum(vector<int>& arr) {
        int ans = 0;
        int xorVal = 0;
        xorSum(arr,arr.size(),ans,xorVal,0);
        return ans;
    }
};