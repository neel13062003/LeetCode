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
    
    //O(n)=Time COmplexity  & O(n)=no. of node= O(height of tree). 
    void printPreorder(TreeNode* root,vector<int>&ans){
         if(!root){
             return;
         }
          ans.push_back(root->val);
          printPreorder(root->left,ans);
          printPreorder(root->right,ans);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        printPreorder(root,ans);
        return ans;
    }
};