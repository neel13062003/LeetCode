class Solution {
public:
     bool isSubstring(string A, string B, int& index) {
        index = A.find(B);
        if (index != string::npos) {
            return true;
        } else {
            return false;
        }
    }
    int strStr(string haystack, string needle) {
        int index;
        bool found = isSubstring(haystack,needle,index);
        if (found) {
            //cout << "Substring found at index " << index << endl;
            return index;
            
        } else {
            //cout << "Substring not found" << endl;
            return -1;
        }
    }
};