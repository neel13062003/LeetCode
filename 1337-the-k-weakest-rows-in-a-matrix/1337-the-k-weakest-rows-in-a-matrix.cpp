class Solution {
public:
    struct compare {
        bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
            if (p1.first != p2.first)
                return p1.first < p2.first;
            else
                return p1.second < p2.second;
        }
    };
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>store;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)count++;
            }
            store.push_back({count,i});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        for(int i=0;i<store.size();i++){
            pq.push(store[i]);
            if(pq.size() > k) pq.pop();
        }
        
        vector<int>ans;
        while(!pq.empty()){
            int a = pq.top().second;
            pq.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;

    }
};

/*
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < m; i++) {
            int start = 0, end = n - 1;
            while (start <= end) {
                int mid = (start + end) / 2;
                if (mat[i][mid] == 0) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
            pq.push({end + 1, i});
        }
        vector<int> ans;
        while (k--) {
            auto ele = pq.top(); pq.pop();
            ans.push_back(ele.second);
        }

        return ans;
    }
};
*/