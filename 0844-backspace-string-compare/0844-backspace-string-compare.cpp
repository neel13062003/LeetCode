class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,t1;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')s1.push(s[i]);
            else{
                if(s1.empty()!=true)s1.pop();
            } 
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#')t1.push(t[i]);
            else{
               if(t1.empty()!=true) t1.pop();
            } 
        }
        if(s1==t1) return true;
        else return false;
    }
};