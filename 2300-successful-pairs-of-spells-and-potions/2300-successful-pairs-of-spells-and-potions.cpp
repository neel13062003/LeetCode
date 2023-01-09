//O(n^2) => TLE
/*class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<spells.size();i++){
            count=0;
            for(int j=0;j<potions.size();j++){
                if( potions[j]*spells[i] >= success){
                    count++;
                }
            }
            ans.push_back(count);
        } 
        return ans;
    }
};*/
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        // declare a vector of size spell that will store our ans
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n,0);
        
        // sort the potions fir applying the binary search
        sort(potions.begin(),potions.end());
        
        int i = 0;                    // it will help in storing the ans
        
        // start iterating over the spells
        for(auto& x : spells)
        {
            int l = 0;
            int r = m-1;
            int mid;
            
            // binary search
            while(l <= r)
            {
                mid = (l+r)>>1;
                
                // if it gives our need then reduce the window to the left side for cheking more 
                if((long long)x*potions[mid] >= success)
                    r = mid-1;
                
                // if not then check to the right side
                else
                    l = mid+1;
            }
            ans[i] = m-l;            // storing the answer (total size - not needed size)
            i++;
        }
        return ans;
    }
};