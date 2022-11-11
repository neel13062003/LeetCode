class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        /*
        https://leetcode.com/problems/sort-an-array/discuss/1401412/C%2B%2B-Clean-Code-Solution-or-Fastest-or-All-(15%2B)-Sorting-Methods-or-Detailed =>Best Sorting Discussion
        */
        sort(nums.begin(), nums.end());
        return nums;
    }
};