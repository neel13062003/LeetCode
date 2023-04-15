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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        int xlevel, ylevel;
        int xparent, yparent;
        
        while(!q.empty()) {
            TreeNode* temp = q.front().first;
            int h = q.front().second.first;
            int par = q.front().second.second;
            q.pop();
            
            if(temp -> val == x) {
                xlevel = h;
                xparent = par;
            }
            else if(temp -> val == y) {
                ylevel = h;
                yparent = par;
            }
            if(temp -> left) {
                q.push({temp -> left, {h+1, temp -> val}});
            }
            if(temp -> right) {
                q.push({temp -> right, {h+1, temp -> val}});
            }
        }
        
        if(xlevel == ylevel) {
            if(xparent != yparent) {
                return true;
            }
        }
        return false;
    }
};