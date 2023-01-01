class Solution {
public:
    
    bool isPrime(int n){
        // Corner case
        if (n <= 1)
            return false;

        // Check from 2 to square root of n
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;

        return true;
    }

    
    vector<int> closestPrimes(int left, int right) {
        //left <= nums1 < nums2 <= right
        vector<int>ans;
        int flag=0;
        
        for(int i=left;i<=right;i++){
            if( isPrime(i)== true ){
               ans.push_back(i); 
               if(ans.size()>1){
                    flag=1; 
               } 
            }
        }
        sort(ans.begin(),ans.end());
        vector<int>ans1;
        vector<int>temp;
        if(flag==1){
            /*int a=ans[0];
            int b=ans[1];*/
            int diff=INT_MAX;
            vector<int>res;
            int a;
            int b;
            for(int i=1;i<ans.size();i++){
               int res=ans[i]-ans[i-1];
               if(res<diff){
                    diff=res;
                    a= ans[i];
                    b= ans[i-1];
               }
            }
            
            ans1.push_back(b);
            ans1.push_back(a);
        }else{  
            temp.push_back(-1);
            temp.push_back(-1);   
        }
        
        if(flag==0){
            return temp;
        }else{
            return ans1;
        }
    }
};