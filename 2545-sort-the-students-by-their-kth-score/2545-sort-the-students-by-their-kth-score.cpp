class Solution {
public:
       //Direct Concept...
        vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
           
            //Using Priority Queue
            priority_queue<pair<int,int>>pq;
            for(int i=0;i<score.size();i++){
                pq.push({ score[i][k], i});
            }
            
            vector<vector<int>>ans;
            while(!pq.empty()){
                auto x= pq.top();
                pq.pop();
                ans.push_back(score[x.second]);
            }
            return ans;            
        }
};










 /*sort(score.begin(), score.end(), [k](const auto& a, const auto& b) {
                return a[k] > b[k];
            });
            return score;
            */