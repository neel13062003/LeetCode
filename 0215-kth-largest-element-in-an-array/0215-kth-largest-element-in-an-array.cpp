class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //Using mean heap
        /*priority_queue<int, vector<int>, greater<int>>q;
		for(int i=0; i<nums.size(); i++){
			q.push(nums[i]);
			while(q.size()>k){
                q.pop();
            }
		}
		return q.top();
        //sorting thi na kari devo */
        
        //Using Max Heap
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        k=k-1;
        while(k--){
            q.pop();
        }
        return q.top();        
    }
};