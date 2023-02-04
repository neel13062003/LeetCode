class Solution {
public:
    
    /*double max(double a,double b){
        return a>b ? a:b;
    }*/
    
    double findMaxAverage(vector<int>& nums, int k){
        double maxValue = 0; 
        for(int i = 0 ; i < k ; i++)
            maxValue += nums[i] ;

        int start = 0;
        double curValue = maxValue; 
        for(int i = k ; i < nums.size() ; i++)
        {
            curValue = curValue - nums[start] + nums[i]; 
            maxValue = max(curValue, maxValue);
            start++ ; 
        }  
        return maxValue/k ;
    }
};



    
















/*vector<int> pref=nums;
        long long mx= LLONG_MIN;
        if(k==1) mx=nums.front();
        for(int i=1;i<nums.size();i++){
            pref[i]+=pref[i-1];
            if(i>=k-1){
                long long delta=pref[i]-pref[i-k+1]+nums[i-k+1];
                mx=max(mx,delta);
            }
        }
        double mean=(mx*1.0)/k;
        return mean;*/