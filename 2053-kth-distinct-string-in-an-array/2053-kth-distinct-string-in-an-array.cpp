/*class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
         Because Unordered_Map not store my data sequencially.
         unordered_map<string,int>mp;
         for(int i=0;i<arr.size();i++)  mp[arr[i]]++;
        
         vector<string>vec;
         for(auto it:mp)
             if(it.second == 1) vec.push_back(it.first);
        
         string str="";
        
         if(vec.size() < k ) return str;
         else  return vec[k-1];
    }
};*/
class Solution {
public:
    void print(unordered_map<string, int> &ump)
    {
        for (auto it : ump)
        {
            cout << it.first << " : " << it.second << endl;
        }
    }

    void rmvDuplicate(unordered_map<string, int> &ump)
    {
        vector<string> res;
        for (auto it : ump)
        {
            if (it.second > 1)
                res.push_back(it.first);
        }

        for (int i = 0; i < res.size(); i++)
        {
            ump.erase(res[i]);
        }
    }

    string kthDistinct(vector<string> &arr, int k)
    {
        int n = arr.size();
        unordered_map<string, int> ump;

        for (int i = 0; i < n; i++)
            ump[arr[i]]++;

        rmvDuplicate(ump);

        if (ump.size() < k)
            return "";

        vector<string> tmp;
        for (int j = 0; j < n; j++)
        {
            if (ump.find(arr[j]) != ump.end())
            {
                tmp.push_back(arr[j]);
            }
        }
        return tmp[k - 1];
    }
};