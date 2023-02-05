class Solution {
public:
    bool isvowel(char c){
        string s="aeiou";
        return s.find(c) != string::npos;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i]=(isvowel(words[i].front()) && isvowel(words[i].back()));
        }
        vector<int> pref=v;
        for(int i=1;i<n;i++){
            pref[i]+=pref[i-1];
        }
        vector<int> ans;
        for(auto & row:queries){
            int l=row[0];
            int r=row[1];
            int ctr=pref[r]-pref[l]+v[l];
            ans.push_back(ctr);
        }
        return ans;
    }
};

/*class Solution {
public:
    
    //This is problem of Segment Tree(Fenwick Tree)
    
    //Query Based Problem - TLE returns.
    //Which Perform Range Based Problem in O(logn)
    
    bool isVovel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }else{
            return false;
        }
    }
    
    vector<int> Work(vector<string>& words){
        vector<int>ans; 
        int count=0;
        for(int i=0;i<words.size();i++){
            count=0;
            int temp = words[i].size();
            if( (isVovel(words[i][0])==true) && (isVovel(words[i][temp-1])==true)){
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
    
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans;
        vector<int> store = Work(words);
        int n=queries.size();
            
        while(n--){
            int sum=0;
            for(int i=queries[n][0];i<=queries[n][1];i++){
                 sum+= store[i];  
            }
            ans.push_back(sum);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};*/
/*
int main() {
    std::vector<std::string> words = {"cocoa", "apple", "banana", "echo", "eagle"};
    std::vector<std::vector<int>> queries = {{0, 2}, {2, 4}};
    Solution solution;
    std::vector<int> ans = solution.vowelStrings(words, queries);
    for (int x : ans) {
        std::cout << x << ' ';
    }
    std::cout << std::endl;
    return 0;
}

*/