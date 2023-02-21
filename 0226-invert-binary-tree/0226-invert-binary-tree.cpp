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
    
    void mirror(TreeNode* root){ 
        if(root==nullptr){
            return;
        }else{
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
            mirror(root->left);
            mirror(root->right);
        }  
    }
    
    TreeNode* invertTree(TreeNode* root) {
        mirror(root);
        return root;
    }
};