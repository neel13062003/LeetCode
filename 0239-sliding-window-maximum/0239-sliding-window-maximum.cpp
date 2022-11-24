#include <bits/stdc++.h>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        list<int> l;
        vector<int> ans; int i = 0, j=0;
        while(j < n)
        {
            while(l.size() > 0 && l.back() < arr[j])     //parallery check maximum and store maximum
                l.pop_back();       //if not maximum pop
            
            l.push_back(arr[j]); //if maximum insert into list
            
            if(j - i + 1 < k)         //haji sliding window sudhi nathi pochya
                j++;
            else if(j - i + 1 == k)
            {
                ans.push_back(l.front());
                if(l.front() == arr[i])    // first ne remove
                    l.pop_front();
                i++; j++;                //sliding window karva
            }
        }
        
        return ans;
        
        /*vector<int>ans;
         int maxF= INT_MIN;
        for(int i=0;i<nums.size()-k+1;i++){
            for(int j=i;j<k;j++){
                  maxF=max(maxF,nums[j]);
            } 
            ans.push_back(maxF);
            maxF=INT_MIN;
        }
        return ans;*/
    }
};