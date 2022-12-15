class Solution {
public:
    
    int firstOcu(vector<int>&nums , int key){
        int firstOc;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                firstOc = i+1 ;
                break;
            }
        }
        return firstOc;
    }
    int lastOcu(vector<int>&nums , int key){
        int lastOc;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                lastOc = i+1 ;
            } 
        }
        return lastOc;
    }   
    
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }        
        
        int maxf=-1;
        for(auto it=mp.begin();it!=mp.end();it++){
            if( (it->second) > maxf) maxf=it->second;
        }
        
        vector<int> vec;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            if( (it->second) >= maxf ){
                 vec.push_back(it->first);
            }
        }
        int first,last,diff=-1,ans=INT_MAX; 
        for(int i=0;i<vec.size();i++){
             int x=vec[i];
             first= firstOcu(nums,x);
             last = lastOcu(nums,x);
             diff = last-first+1;
             if(ans>diff) ans=diff;      
        }
        return ans;
    }
};     