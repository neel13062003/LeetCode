class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    /*vector<int>answer;
    unordered_map<int,int>m;
	for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
    
    priority_queue<pair<int,int>>pq;
    for(auto x:m)
    {
    pq.push({-x.second,x.first});//work as min heap
    if(pq.size()>k)
        pq.pop();
    }
    
    while(!pq.empty())
    {
        answer.push_back(pq.top().second);
        pq.pop();
    }
    
    return answer;*/
        /*
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if( (it->second) >=  k){
                ans.push_back(it->first);
            }
        }
        return ans;*/
        
        int n = nums.size();
        map<int,int> m;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(auto x : m)
        {
            pq.push({x.second,x.first});
        }
 
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
       return ans; 
        
        //K top k frequent doesn't means etla j. Top ni frequceny vala total k elements.
        
        
}
   
    
};