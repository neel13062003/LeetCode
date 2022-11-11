class Solution {
public:
    int countPrimes(int n) {
        
        
        /* 
           Time Complexity : O(n*log(log(n))
           Space Complexity : O(n)
        */
        
		//prime no. generation using sieve of eratothons
		vector<bool> prime(n + 1, true);
		prime[0] = false;
		prime[1] = false;
		for (int i = 2; i * i <= n; i++) {
			if (prime[i]) {
				for (int j = i * i; j <= n; j += i) {
					prime[j] = false;
				}
			}
		}
		//counting prime numbers
		int primeCount = 0;
		for (int i = 2; i < n; i++) {
			if (prime[i]) {
				primeCount++;
			}
		}
		return primeCount;
        
        
        
        
        /*int count=0;
        if(n==1 || n==0 || n==2){
            return 0;
        }
        else{
            while(n>1){
                int flag=0;
                for(int i=2;i<=sqrt(n);i++){
                    if(n%i==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    count++;
                }
                n--;
            }
        }
        return count;*/
    }
};