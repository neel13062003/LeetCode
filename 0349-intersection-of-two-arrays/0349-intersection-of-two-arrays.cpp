class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vector<int> v3;
        set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),back_inserter(v3));
        
        set<int>s;
        for(int i=0;i<v3.size();i++){
            s.insert(v3[i]);
        }
        vector<int>ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;

    }
};