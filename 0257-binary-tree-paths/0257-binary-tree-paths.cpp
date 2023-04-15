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
    void dfs(TreeNode* root, vector<string>& ans, string temp){
        if (root==NULL)return;
        string node= to_string(root->val);
        temp+= node;
        if (root->left==NULL && root->right==NULL){
            ans.push_back(temp);
            return;
        }
        else temp+= "->";
        if (root->left) dfs(root->left,ans,temp);
        if (root->right) dfs(root->right,ans,temp);
        //temp.pop_back();
        //temp.pop_back();
        //temp.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp="";
        dfs(root,ans,temp);
        return ans;
    }
};