/*class Solution {
public:
    string reverseWords(string s) {
        string str,temp;
        vector<string> ans;
        for(int i=s.size()-1;i>=0;i--){
            if(!isspace(s[i])){
                temp.push_back(s[i]);
            }else{
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
            }
        }
        reverse(temp.begin(),temp.end());
        ans.push_back(temp);
        for(int i=0;i<ans.size();i++){
            str.push_back(ans[i]);
        }
        return str;
    }
};*/
class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        vector<string> v;        
        
        while (i < n){            
            string res = "";
            
            while (i < n && s[i] == ' ') i++; // to avoid white space
            while (i < n && s[i] != ' ') res+=s[i++];
            
            if (res == "" || res == " ") continue; // for safety if the condition result in true value.
            v.push_back (res);
        }
        
        string ans = v[0];
        
        for (int i = 1; i < v.size(); i++){
            ans = v[i] + " " + ans; // used 3rd method frm above
        }
        
        return ans;
    }
};