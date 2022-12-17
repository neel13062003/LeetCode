class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int>vec;
	    int count=0;
        int n=nums.size();
	    for(int i=0;i<n;i++){
	        if(nums[i]==0){
	            count++;
	        }else{
	            vec.push_back(nums[i]);
	        }
	    }
	    while(count--){
	        vec.push_back(0);
	    }
	    for(int i=0;i<vec.size();i++){
	        nums[i]=vec[i];
	    }     
    }
}; 