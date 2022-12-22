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
// Recursive
/*
class Solution {
public:
    
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
};*/
//Root- Left Right
//Iterative= > Using Stack
class Solution {
public:
    //preorder => root left right
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        if(root==NULL)return preorder;
        
        stack<TreeNode*>st;
        st.push(root);
        
        while(!st.empty()){
            root=st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }            
        }
        return preorder;
    }
};











