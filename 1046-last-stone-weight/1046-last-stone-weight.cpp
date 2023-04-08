class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //priority_queue <int, vector<int>, greater<int>> gq;   mean heap
        priority_queue<int> pq; // max heap
        for(int i = 0; i < stones.size(); i++){
            pq.push(stones[i]);
        }
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(a == b){
                pq.push(0);
            } else {
                pq.push(abs(a - b));
            }
        }
        return pq.top();
    }
};