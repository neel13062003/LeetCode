#include<bits/stdc++.h>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        int i = 0;
        while(i<tokens.size()){
        if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
          st.push(tokens[i]);
        else{
            string num1 = st.top();
            st.pop();
            string num2 = st.top();
            st.pop();
            long long n1,n2;
            if(num1[0]=='-'){
            string temp = num1.substr(1);
            n1 = -1*stoll(temp); 
            } else n1 = stoll(num1);
            if(num2[0]=='-'){
             string temp = num2.substr(1);
             n2 = -1*stoll(temp);
            } else n2 = stoll(num2);
            long long n;
            if(tokens[i]=="+") n = (n1)+(n2);
            if(tokens[i]=="-") n = (n2)-(n1);
            if(tokens[i]=="*") n= (n2)*(n1);
            if(tokens[i]=="/") n = (n2)/(n1);
            string num;
            num = to_string(n);
            st.push(num);
        }
         i++;
        }
        long long ans = 0;
        string num = st.top();
        if(num[0]=='-') {
          string temp = num.substr(1);
          ans = -1*stoll(temp);
        } else ans = stoi(num);
        return ans;
    }
};