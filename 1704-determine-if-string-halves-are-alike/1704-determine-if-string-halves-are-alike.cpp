class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1="";
        string s2="";
        int n=s.size();
        for(int i=0;i<n/2;i++){
            s1.push_back(s[i]);
        }
        for(int i=n/2;i<n;i++){
            s2.push_back(s[i]);
        }
        int count1=0,count2=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='A' || s1[i]=='a' || s1[i]=='e' || s1[i]=='E' || s1[i]=='i' || s1[i]=='I' || 
               s1[i]=='o' || s1[i]=='O' ||  s1[i]=='u' || s1[i]=='U' ) count1++;
            if(s2[i]=='A' || s2[i]=='a' || s2[i]=='e' || s2[i]=='E' || s2[i]=='i' || s2[i]=='I' || 
               s2[i]=='o' || s2[i]=='O' ||  s2[i]=='u' || s2[i]=='U' ) count2++;   
        }
        if(count1==count2) return true;
        else return false;
    }
};
               
               
               
               