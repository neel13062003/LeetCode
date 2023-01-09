class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
       long int s=0;
       long int m = INT_MIN;
       int i=0,j=0;
       while(j<nums.size())
       {
           s += nums[j];
           if(j-i+1<k)
           {
               j++;
           }
           else if(j-i+1==k)
           {
              m = max(s, m);
              s -= nums[i];
              i++;
              j++;
           }
       }
         double avg = (double)m/(double)k;
       return avg;
    }
};