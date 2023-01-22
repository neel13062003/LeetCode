class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int z1=count(s.begin(),s.end(),'0');
        int z2=count(target.begin(),target.end(),'0');
        int n=s.size();
        if(z1==n || z2==n){
            return z1==z2;
        }
        return true;
    }
};