/*class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        multiset<pair<string,int>> st;
        vector<int> score1 = score;
        sort(score1.begin(), score1.end(), greater<int>());

        for (int i = 0; i < score1.size(); i++) {
            if (i == 0) {
                st.insert({"Gold Medal", score1[i]});
            } else if (i == 1) {
                st.insert({"Silver Medal", score1[i]});
            } else if (i == 2) {
                st.insert({"Bronze Medal", score1[i]});
            } else {
                st.insert({to_string(i+1), score1[i]});
            }
        }

        for (int i = 0; i < score.size(); i++) {
            auto it = st.find({to_string(score[i]), score[i]});
            ans.push_back(it->first);
        }

        return ans;
    }
};*/
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());
        vector<pair<string, int>> medals;
        for(int i=0; i<score.size(); i++) {
            medals.push_back({"", score[i]});
        }

        // sort medals vector in descending order of score
        sort(medals.rbegin(), medals.rend(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second;
        });

        // assign ranks based on position in the sorted vector
        for(int i=0; i<medals.size(); i++) {
            if(i == 0) medals[i].first = "Gold Medal";
            else if(i == 1) medals[i].first = "Silver Medal";
            else if(i == 2) medals[i].first = "Bronze Medal";
            else medals[i].first = to_string(i+1);
        }

        // assign ranks to ans vector based on original score positions
        for(int i=0; i<score.size(); i++) {
            auto it = find_if(medals.begin(), medals.end(), [&](const pair<string, int>& a) {
                return a.second == score[i];
            });
            ans[i] = it->first;
        }

        return ans;
    }
};

