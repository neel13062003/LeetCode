// Idea:
// Sort the array.
// Then, we use a window of size k and calculate the difference between the first and last element in the window.
// res will be the minimum of these values.
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = nums[k-1] - nums[0];
        for (int i = k; i < nums.size(); i++) res = min(res, nums[i] - nums[i-k+1]);
        return res;
    }
};
// //int answer = *min_element(vec1.begin(), vec1.end());
// class Solution {
// public:
    
//     int minimumDifference(vector<int>& nums, int k) {
//         if(nums.size()==1) return 0;
//         int ans = INT_MAX;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-k+1;i++){
//             for(int j=i;j<i+k;j++){
//                 int takeOrnot = abs(nums[i]-nums[i+1]);
//                 ans = min(ans,takeOrnot);
//             }
//         }
//         return ans;
//     }
// };