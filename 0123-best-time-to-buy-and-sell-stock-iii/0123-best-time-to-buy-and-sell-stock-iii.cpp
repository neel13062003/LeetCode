//At max 2 tRANsACTION
//Time Complexity = O(n) 
//Space Complexity  = O(1)


class Solution {
public:
    int solve(vector<int>& prices, int index, bool buy, int limit){
        if(index >= prices.size()) return 0;

        int profit = 0;
        if(buy && limit < 2){
            int choose = -prices[index] + solve(prices, index+1, 0, limit+1);
            int skip = 0 + solve(prices, index+1, 1, limit);

            profit = max(choose, skip);
        }

        else if(buy == 0){
            int choose = prices[index] + solve(prices, index+1, 1, limit);
            int skip = 0 + solve(prices, index+1, 0, limit);

            profit = max(choose, skip);
        }

        return profit;
    }

    int solveMem(vector<int>& prices, int index, bool buy, int limit, vector<vector<vector<int>>> &dp){
        if(index >= prices.size()) return 0;

        if(dp[index][buy][limit] != -1){
            return dp[index][buy][limit];
        }

        int profit = 0;
        if(buy && limit < 2){
            int choose = -prices[index] + solveMem(prices, index+1, 0, limit+1, dp);
            int skip = 0 + solveMem(prices, index+1, 1, limit, dp);

            profit = max(choose, skip);
        }

        else if(buy == 0){
            int choose = prices[index] + solveMem(prices, index+1, 1, limit, dp);
            int skip = 0 + solveMem(prices, index+1, 0, limit, dp);

            profit = max(choose, skip);
        }

        return dp[index][buy][limit] = profit;
    }

    int solveTab(vector<int>& prices){
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, 0)));

        for(int index = n-1; index >= 0; index--){
            for(int buy = 0; buy <= 1; buy++){
                for(int limit = 2; limit >= 0; limit--){
                    int profit = 0;
                    if(buy && limit < 2){
                        int choose = -prices[index] + dp[index+1][0][limit+1];
                        int skip = 0 + dp[index+1][1][limit];

                        profit = max(choose, skip);
                    }

                    else if(buy == 0){
                        int choose = prices[index] + dp[index+1][1][limit];
                        int skip = 0 + dp[index+1][0][limit];

                        profit = max(choose, skip);
                    }

                    dp[index][buy][limit] = profit;
                }
            }
        }

        return dp[0][1][0];
    }

    int solveSO(vector<int> &prices){
        int n = prices.size();

        vector<vector<int>> curr(2, vector<int>(3, 0));
        vector<vector<int>> next(2, vector<int>(3, 0));

        for(int index = n-1; index >= 0; index--){
            for(int buy = 0; buy <= 1; buy++){
                for(int limit = 2; limit >= 0; limit--){
                    int profit = 0;
                    if(buy && limit < 2){
                        int choose = -prices[index] + next[0][limit+1];
                        int skip = 0 + next[1][limit];

                        profit = max(choose, skip);
                    }

                    else if(buy == 0){
                        int choose = prices[index] + next[1][limit];
                        int skip = 0 + next[0][limit];

                        profit = max(choose, skip);
                    }
                    curr[buy][limit] = profit;
                }
            }
            next = curr;
        }
        return curr[1][0];
    }

    int maxProfit(vector<int>& prices) {
        // int n = prices.size();
        // int index = 0;
        // bool buy = 1;
        // int limit = 0;

        // vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        // return solveMem(prices, index, buy, limit, dp);

        return solveSO(prices);
    }
};


/*
Java
public class Solution {
    public int maxProfit(int[] prices) {
        int hold1 = Integer.MIN_VALUE, hold2 = Integer.MIN_VALUE;
        int release1 = 0, release2 = 0;
        for(int i:prices){                              // Assume we only have 0 money at first
            release2 = Math.max(release2, hold2+i);     // The maximum if we've just sold 2nd stock so far.
            hold2    = Math.max(hold2,    release1-i);  // The maximum if we've just buy  2nd stock so far.
            release1 = Math.max(release1, hold1+i);     // The maximum if we've just sold 1nd stock so far.
            hold1    = Math.max(hold1,    -i);          // The maximum if we've just buy  1st stock so far. 
        }
        return release2; ///Since release1 is initiated as 0, so release2 will always higher than release1.
    }
}
*/