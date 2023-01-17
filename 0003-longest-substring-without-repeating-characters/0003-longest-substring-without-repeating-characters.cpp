class Solution {
public:
    int lengthOfLongestSubstring(string s) {    //abcad
       //Frequencey Map Creating.
        vector<int> mapp(256,-1);   //string contain maximum different 256 characters;
       int left=0,right=0,len=0;
       int n=s.size();
       while(right<n){
           if( mapp[s[right]] != -1) left = max(left, mapp[s[right]]+1);
           mapp[s[right]] = right;
           
           len= max(len,right-left+1);
           right++;
       } 
       return len; 
    }
};