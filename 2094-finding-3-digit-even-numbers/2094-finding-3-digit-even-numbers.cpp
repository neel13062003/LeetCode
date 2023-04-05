class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> result;
        unordered_set<int> set;
        const auto size = digits.size();
        sort(begin(digits), end(digits));
        for (auto i = 0; i < size; ++i) {
            if (digits[i] == 0) continue;
            for (auto j = 0; j < size; ++j) {
                if (j == i) continue;
                for (auto k = 0; k < size; ++k) {
                    if (k == i || k == j || digits[k] % 2) continue;
                    const auto num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (!set.count(num)) {
                        set.insert(num);
                        result.push_back(num);
                    }
                }
            }
        }
        return result;
    }
};

// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//        string str="";
//         set<string>s;
//         for(int i=0;i<digits.size();i++){
//             if (digits[i] == 0) continue;      //break loop ni bahar nikde ane continue e ne skip kari de
//             for(int j=0;j<digits.size();j++){
//                 if (j == i) continue;
//                 for(int k=0;k<digits.size();k++){
//                     if (k == i || k == j || digits[k] % 2) continue;
//                     str=to_string(digits[i])+to_string(digits[j])+to_string(digits[k]);
//                     s.insert(str);
//                 }
//             }
//         }
//         vector<string>vec;
//         for (auto it = s.begin(); it != s.end(); it++) {
//                 vec.push_back(*it);
//         }
//         vector<int>ans;
//         for(int i=0;i<vec.size();i++){
//             if(vec[i][0]!= '0' &&  stoi(vec[i])%2==0){
//                 ans.push_back(stoi(vec[i]));
//             }
//         }

//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };