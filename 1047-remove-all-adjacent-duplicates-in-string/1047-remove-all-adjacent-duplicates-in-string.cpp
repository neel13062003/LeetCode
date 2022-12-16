/*class Solution {
public:
     string removeDuplicates(string s) {
        string ans="";
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top()==s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};*/
    
class Solution{
    public:
    string removeDuplicates(string s){
         string str="";
         stack<char>st;
         for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);   
            }else{
                if(st.top()==s[i]){
                    st.pop(); 
                }else{
                    st.push(s[i]);
                } 
            }
         }
         while(!st.empty()){
            str.push_back(st.top());
            st.pop();
         }
        reverse(str.begin(),str.end());
         return str;
    }
};



















