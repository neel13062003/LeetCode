class Solution {
public:
    //Time Complexity = O(n) Space Complexity = O(1) Kadanes'Algo Updated
    int maxProduct(vector<int>& nums) {
        int mx = nums[0];
        int mn = nums[0];
        
        int prod = nums[0];
        for(int i=1;i<nums.size();i++){
            
            if(nums[i] < 0){
                swap(mx,mn);
            }
            
            mx = max(nums[i],mx*nums[i]);
            mn = min(nums[i],mn*nums[i]);
            
            
            prod =  max(prod,mx);
        }
        return prod;
    }
};