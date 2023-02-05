class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.length();i+=2) s[i]=s[i-1]+s[i]-'0';
        return s;
    }
};

/*Ascii Value*/
/*
0-9 => 48-57
a-zI=> 97-122
A-Z => 65-90
*/