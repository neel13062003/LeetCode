class Solution {
public:
    
    int lastOcc(vector<int>&nums,int n,int key){
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(nums[mid]==key){
                ans=mid;
                start=mid+1;
            }else if(nums[mid]>key){
                end=mid-1;
            }else if(nums[mid]<key){
                 start=mid+1;
            }
            
            mid= start + (end-start)/2;
        }
        return ans;
    }
    
    
    int firstOcc(vector<int>&nums,int n,int key){
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(nums[mid]==key){
                ans=mid;
                 end=mid-1;
            }else if(nums[mid]>key){
                 end=mid-1;
            }else if(nums[mid]<key){
                start=mid+1;
            }
            mid= start + (end-start)/2;
        }
        return ans;
    }
    

    vector<int> searchRange(vector<int>& nums, int target) {
        //First Ocu= UP Bound & Last Ocu = LB
        
        
        
        //Using Binary Search
        pair<int,int>p;
        int n=nums.size();
        p.first= firstOcc( nums,n,target );
        p.second= lastOcc( nums,n,target);
        return {p.first,p.second};
        
         
        
        
        /*
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
        
        vector<pair<int,int>> vec;
        vec.push_back(  {p.first,p.second} );
        return vec;
        return {p.first,p.second}; */
    }
};