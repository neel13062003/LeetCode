//First Problem is about only chhose maximum 1 profit and give result in O(N)
//Striver All 6 Parts Are Amazing

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int sum=0;  //a =prices
        for(int i=1;i<a.size();i++){
            int t=a[i]-a[i-1];
            if(t>0)
            sum+=t;
        }
        return sum;
    }
};

//O(n) = Time complexity
//O(1) = Space Complexity

//Immediatedly take decision each and every day either take or not.

//It works because You only need to When you have on stock in your hand until you can't sell this stock.

//Otherwise this testcase might give wrong 

// 3 4 5 15 => This will return 12 but for this prevois constraintpurchases we can't purchase new stock until we sold our prevois stock.
// 3 4 5 15 => This will return 13 for if we holding stock and agiain purchase
