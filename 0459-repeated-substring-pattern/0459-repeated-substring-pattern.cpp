class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int len = 1; len <= n / 2; len++) {
            if (n % len == 0) {
                bool valid = true;
                for (int i = len; i < n; i++) {
                    if (s[i] != s[i % len]) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    return true;
                }
            }
        }
        return false;
    }
};