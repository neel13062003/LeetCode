/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>vec1;
        for(int i=1;i<n-1;i++){
            int start=0;
            int end=n-1;
            int p=0;
            while(start<i && i<end){
                if(nums[i]+nums[start]+nums[end]==0){
                    vec1.push_back(nums[i]);
                    vec1.push_back(nums[start]);
                    vec1.push_back(nums[end]);
                    p=1;
                }
                else if((nums[i]+nums[start]+nums[end])>0) end--;
                else start++;
                
                if(p==1){
                    vec.push_back(vec1);
                    p=0;
                    vec1.clear();
                }
            }
        }
        return vec;
    }
};*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int  n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            
            if((i==0) || (i>0 && nums[i]!=nums[i-1]))
            {
                
                int l=i+1,h=n-1,sum=0-nums[i];
                while(l<h)
                {
                    if(nums[l]+nums[h]==sum)
                    {
                        vector<int>v(3,0);
                        v[0]=nums[i];
                        v[1]=nums[l];
                        v[2]=nums[h];
                        ans.push_back(v);
                        while(l<h && nums[l]==nums[l+1])
                        {
                            l++;
                        }
                        while(l<h && nums[h]==nums[h-1])
                        {
                            h--;
                        }
                        l++;
                        h--;
                    }
                    else if(sum<nums[l]+nums[h])
                        h--;
                        else
                        l++;
                }
            }
        }
        return ans;
    }
};