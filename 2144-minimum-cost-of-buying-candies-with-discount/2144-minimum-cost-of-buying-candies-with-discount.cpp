//Greedy
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        //priority_queue<int,vector<int>,greater<int>>pq;  //min-heap
        priority_queue<int>pq; //max-heap
        for(int i=0;i<cost.size();i++){
            pq.push(cost[i]);
        }
        int totalCost=0;
        
        if(pq.size()==2){
            return cost[0]+cost[1];
        }else if(pq.size()==1){
            return cost[0];
        }
        
        while(pq.size()>2){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            totalCost += a+b;
            pq.pop();
        }
        while(pq.size()!=0){
            totalCost+= pq.top();
            pq.pop();
        }
        return totalCost;
    }
};