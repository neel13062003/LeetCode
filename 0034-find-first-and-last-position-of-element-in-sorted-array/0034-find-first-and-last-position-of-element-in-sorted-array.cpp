class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //First Ocu= UP Bound & Last Ocu = LB
        
        
        
        //1) Using Linear Search
        vector<int>ans;
        //pair<int,int> p;
         int p=-1,q=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                q=i;
                break;
            }
        }
        ans.push_back(q);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
               p=i;  
            }
        }
        ans.push_back(p);
        return ans;
        
        /*
         /*vector<pair<int,int>> vec;
        vec.push_back(  {p.first,p.second} );
        return vec;
        return {p.first,p.second}; */
    }
};