class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sum_count; // map to store count of running sums
        int count = 0; // count of subarrays with sum k
        int sum = 0; // running sum
        
        sum_count[0] = 1; // initialize the count of running sum 0 as 1
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum_count.find(sum - k) != sum_count.end()) { // if a running sum seen earlier has a difference of k with the current running sum
                count += sum_count[sum - k]; // add the count of subarrays with sum k that end at the earlier index
            }
            sum_count[sum]++; // increment the count of the current running sum
        }
        
        return count;
    }
};
