/*class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        char p;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if((int(p)>=65 && int(p)<=122) && (s[i]==' ')){
                break;
            }
            if(int(s[i])>=65 && int(s[i])<=122){
                count++;
                p = s[i];
            }
        }
        return count;  
    }
};*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int c=0,f=0;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=' ')
        {
         c++;
         f=1;
        }
        else if(f==1)
        break;

    }
        return c;
    }
};