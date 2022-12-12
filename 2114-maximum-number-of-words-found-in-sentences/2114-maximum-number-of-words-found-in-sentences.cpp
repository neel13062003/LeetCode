class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int currentCount;
        int res=0;
        for(int i=0;i<sentences.size();i++){
            currentCount=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    currentCount++;
                }
            }
            res= max(currentCount,res);
        }
        return res;
    }
};