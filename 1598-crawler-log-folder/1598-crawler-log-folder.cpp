class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        int count2=0;
        int ans=0;
        for(int i=0;i<logs.size();i++){
            for(int j=0;j<logs[i].size();j++){
                if(logs[i][0]!='.'){
                    count++; break;
                } 
                else if(logs[i][j]=='.' && logs[i][j+1]=='.'){
                   count2++; break; 
                } 
            }
            ans=ans+ count-count2;
            if(ans<0) ans=0;
            count=0;
            count2=0;
        }
        return ans;
    }
};