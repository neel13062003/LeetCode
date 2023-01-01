class Solution {
public:
    
    
    //string to num=  int(str) , stoi(num);
    //num to string=  to_string(num);
    int minimumPartition(string s, int k) {
        int n = to_string(k).length(), res = 0;
        for (int i = 0; i < s.length();) {
            int used = stoi(s.substr(i, n)) <= k ? n : n - 1;
            if (used <= 0) return -1;
            res++, i += used;
        }
        return res;
    }
};