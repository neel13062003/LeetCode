class Solution {
public:  
    static bool cmp(vector<int>& A, vector<int>& B){
        return A[1] < B[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);

        int count = 0;
        int end = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0] < end){
                // overlap detected, remove the interval with the larger end time
                count++;
                end = min(end, intervals[i][1]);
            }else{
                end = intervals[i][1];
            }
        }

        return count;
    }
};

