class Solution {
public:
    bool wordPattern(string pattern, string s) {
       s.push_back(' ');
        unordered_map<string, char> mp;
        unordered_map<char, string> mp2;
        string st;
        int id = 0;
        for(auto c: s) {
            if(c == ' ') {
                if(id >= pattern.size()) return false;
                if(mp.find(st) == mp.end() and mp2.find(pattern[id]) == mp2.end()) {
                    mp[st] = pattern[id];
                    mp2[pattern[id]] = st;
                }
                else {
                    if(mp[st] != pattern[id] or mp2[pattern[id]] != st) return false;
                }
                id++;
                st.clear();
            }
            else st.push_back(c);
        }
        if(id != pattern.size()) return false;
        return true;
    }
};