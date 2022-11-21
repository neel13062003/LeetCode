class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        string ans = s;
        for(int i=0;i<s.size();i++) {
            ans[ind[i]] = s[i];
        }
        return ans;
    }
};