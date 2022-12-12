class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        // items[i] = [typei, colori, namei]
        // rulevalue = our search key
        int k;
        if(ruleKey=="type") k=0;
        else if(ruleKey=="color") k=1;
        else if(ruleKey=="name") k=2;
        
        int count=0;
        for(int i=0;i<items.size();i++){
                if(items[i][k]==ruleValue) count++;
        }
        return count;
    }
};