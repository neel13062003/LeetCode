/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
    map<int, map<int,vector<int>>> nodes; // HD, Level
    queue<pair<TreeNode*, pair<int,int>>> q;
    vector<vector<int>> ans;
        
    if(root==NULL) return ans;
        
    q.push(make_pair(root, make_pair(0,0))); // 0 level pe and 0 distance pe
        
    while(!q.empty())
    {
        pair<TreeNode*, pair<int,int>> temp=q.front();
        q.pop();
            
        TreeNode* frontNode=temp.first;
            
        int hd=temp.second.first;
        int lvl=temp.second.second;
            
        nodes[hd][lvl].push_back(frontNode->val);
            
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
            
    }
        
    for(auto i:nodes)
    {
        vector<int> output;

        for(auto j:i.second)
        {
            sort(j.second.begin(), j.second.end()); // extra line added
            for(auto k:j.second)
            {
                output.push_back(k);
            }
        }
        ans.push_back(output);
    }
        
    return ans;
    }
};