/*class Solution {
public:
    
    //void primeFactors(int n){
    
   vector<int> primeFactors(int n){ 
    // Print the number of 2s that divide n
        vector<int>ans;
        while (n % 2 == 0){
            //cout << 2 << " ";
            ans.push_back(2);
            n = n/2;
        }

        // n must be odd at this point. So we can skip
        // one element (Note i = i +2)
        for (int i = 3; i <= sqrt(n); i = i + 2){
            // While i divides n, print i and divide n
            while (n % i == 0){
                //cout << i << " ";
                ans.push_back(i);
                n = n/i;
            }
        }

        // This condition is to handle the case when n
        // is a prime number greater than 2
         if (n > 2)
            //cout << n << " ";
             ans.push_back(n);
    return ans;
   }
 
   
    
    int nthUglyNumber(int n) {
        vector<int>ans; 
        ans=primeFactors(n);
        
        int count=0,x;
        
        if(n==1) return 1;
        else{
             for(int i=1;   ;i++){
                 if( i%2==0 || i%3==0 || i%5==0 ){
                    count++;
                    x=i;
                 } 
                 if(count==n-1) break;
             }
           return x;
        }
    }
};*/


class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> st;
        st.insert(1);
        long long ans;
        for(int i=1; i<=n; i++) {
            ans = *st.begin();
            st.erase(ans);
            st.insert(ans * 2);
            st.insert(ans * 3);
            st.insert(ans * 5);
        }
        return int(ans);
    }
};