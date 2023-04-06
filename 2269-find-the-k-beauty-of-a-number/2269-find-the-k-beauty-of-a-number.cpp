class Solution {
public:
    
    
    //Must Be Solve in O(n)
    int divisorSubstrings(int num, int k) {
      string number = to_string(num);
        int left = 0, right = k-1, ans = 0;

        while (right < number.size())
        {
            int currentWindow = stoi(number.substr(left, k));
            if (currentWindow != 0 && num % currentWindow == 0) ++ans;
            ++left;
            ++right;
        }

        return ans;
    }
};