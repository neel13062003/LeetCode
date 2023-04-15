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
    int findBottomLeftValue(TreeNode* root) {
        map<int , int> mp; //mapping level to leftmost node
        queue<pair<TreeNode * , int> > q;
        
        int ans = 0;
        if(root == NULL)
            return ans;
        
        q.push(make_pair(root , 0));
        
        while(!q.empty()){
            pair<TreeNode * , int> temp = q.front();
            q.pop();
            
            TreeNode *frontNode = temp.first;
            int lvl = temp.second;
            
            if(mp.find(lvl) == mp.end())
                mp[lvl] = frontNode->val;
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left , lvl+1));
                        
            if(frontNode->right)
                q.push(make_pair(frontNode->right , lvl+1));
        }
        return mp[mp.size()-1];
    }
};