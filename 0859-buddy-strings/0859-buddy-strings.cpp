class Solution {
public:
    bool buddyStrings(string s, string goal) {
        map<char,int> mp1,mp2;
        set<char> st;
        for(auto i : s) mp1[i]++,st.insert(i);
        for(auto i : goal) mp2[i]++,st.insert(i);
        
        for(auto i : st){
            if(mp1.find(i) == mp1.end() or mp2.find(i) == mp2.end())
                return false;
        }
        
        if((s == goal and mp1.size() > 1 and s.size() == 2) or
           (s == goal and mp1.size() == s.size()) 
           or s.size() != goal.size()) 
            return false;
        
        int ind1 = -1,ind2 = -1;
        for(int i=0;i<s.size();i++){
            if(s[i] != goal[i]){
                if(ind1 == -1) ind1= i;
                else if(ind2 == -1) ind2 = i;
            }
            if(ind1 != -1 and ind2 != -1) break;
        }
        
        if(ind1 != -1 and ind2 != -1)
            swap(s[ind1],s[ind2]);
            
        return (s == goal);
    }
};