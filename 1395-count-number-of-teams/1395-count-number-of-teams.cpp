//O(n^3)
/*class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count=0;
        for(int i=0;i<rating.size();i++){
            for(int j=i+1;j<rating.size();j++){
                for(int k=j+1;k<rating.size();k++){
                    if(rating[i]>rating[j]    &&      rating[j]>rating[k]) count++;
                    else if(rating[i]<rating[j]   &&    rating[j]<rating[k]) count++;
                }
            }
        }
        return count;
    }
};*/

//O(n^2)
class Solution {
public:
    int numTeams(vector<int>& rating) {
        const int n = rating.size();
        int r = 0;
        for (int i = 0; i < n; ++i) {
            int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
            for (int j = 0; j < n; ++j) {
                if (j < i) {
                    if (rating[j] < rating[i]) {
                        ++x1;
                    } else {
                        ++x2;
                    }
                } else if (j > i) {
                    if (rating[j] < rating[i]) {
                        ++y1;
                    } else {
                        ++y2;
                    }
                }
            }
            r += x1 * y2 + x2 * y1;
        }
        return r;
        
    }
};