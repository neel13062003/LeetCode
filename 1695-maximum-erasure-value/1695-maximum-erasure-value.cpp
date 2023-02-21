 //clear is use to clear all elements of set and erase is use to erase perticular element
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int st=0,n=nums.size(),i,sum=0,maxi=0;
        map<int,int>m;
        for(i=0;i<n;i++){
            int x=nums[i];
            m[x]++;
            sum+=x;
            while(m[x]>1){
                m[nums[st]]--;
                sum-=nums[st];
                st++;
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};