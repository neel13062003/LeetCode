class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++){
            int sum=0;
            int j=i;
            int x=2;
            while(x--){
                 sum=sum+nums[j];
                j++;
            }
            mp[sum]++;
        }
        int p=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second >1){
                p=1;
                break;
            }
        }
        if(p==1){
            return true;
        }else{
            return false;
        }
    }
};