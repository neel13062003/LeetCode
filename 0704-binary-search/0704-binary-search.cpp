class Solution {
public:
    int search(vector<int>& nums, int target) {
        //linear search Approach
        /*int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
            }
        }
        return ans;*/
        
        //binary search approach
         int start=0;
         int end=nums.size()-1;
         int mid=(start+end)/2;
         while(start<=end){
             if(nums[mid]==target){
                 return mid;
             }
             if(target>nums[mid]){
                 start=mid+1;
             }else{
                 end=mid-1;
             }
             mid= (start+end)/2;
         }
         return -1;
    }
};