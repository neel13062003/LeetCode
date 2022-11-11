class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int duplicatesEncountered = 0, i = 1;
        for(;i < size(nums); i++) {
            if (nums[i] == nums[i - 1]) duplicatesEncountered++;
            else nums[i - duplicatesEncountered] = nums[i]; 
        }
        return size(nums) - duplicatesEncountered;
    }
};