class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       unordered_map<int,int>mp;
       for(int i=0;i<banned.size();i++){
           mp[banned[i]]++;
       }
       unordered_map<int,int>mp2;
       for(int i=1;i<=n;i++){
           mp2[i]++;
       }
       vector<int>sep;
        for(auto it:mp2){
            if(mp.find(it.first)!=mp.end()){
                
            }else{
                sep.push_back(it.first);
            }
        }
        int sum=0;
        int count=0;
        sort(sep.begin(),sep.end());
        for(int i=0;i<sep.size();i++){
            if(sum<maxSum){
                sum+= sep[i];
                count++;
            }
            if(sum>maxSum){
                count--;
                break;
            }
        }
        return count;
    }
};