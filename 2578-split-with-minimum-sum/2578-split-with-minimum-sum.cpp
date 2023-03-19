class Solution {
public:
    int splitNum(int num) {
        string str = to_string(num);
        sort(str.begin(),str.end());
        string s1,s2;
        for(int i=0;i<str.size();i++){
            if(i%2==0)s1.push_back(str[i]);
            else s2.push_back(str[i]);
        }
        long long n1,n2;
        n1 = stoll(s1);
        n2 = stoll(s2);
        return n1+n2;
    }
};