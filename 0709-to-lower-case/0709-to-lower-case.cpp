#include <bits/stdc++.h>
#include <string>
class Solution {
public:
    string toLowerCase(string s) {
        //isupper(s);
       /* string str= islower(s);
        return str;*/
        /*void convertOpposite(string& str){
            int ln = str.length();
            // Conversion according to ASCII values
            for (int i = 0; i < ln; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    // Convert lowercase to uppercase
                    str[i] = str[i] - 32;
                else if (str[i] >= 'A' && str[i] <= 'Z')
                    // Convert uppercase to lowercase
                    str[i] = str[i] + 32;
            }
        }*/
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
        }
        return s;
        
        
    }
};