/*https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/discuss/638137/All-Variants-of-%22Best-Time-to-Buy-and-Sell-Stock%22-problems*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*TLE =  O(n^2)
        int maxi = 0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]-prices[i] > maxi){
                    maxi = prices[j]-prices[i];
                }
            }
        }
        return maxi;*/
        
        //Time Complexity = O(n)
        //Space Complexity = O(1)
        int mini=prices[0];
        int cost,profit=0;
        for(int i=1;i<prices.size();i++){
            cost = prices[i]-mini;
            profit =  max( profit,cost);
            mini= min(mini,prices[i]);
        }
        return profit;
    }
};