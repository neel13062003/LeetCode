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
//Recursive
/*
class Solution {
public:
    
    void printPO(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        printPO(root->left,ans);
        printPO(root->right,ans);
        ans.push_back(root->val);
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        printPO(root,ans);
        return ans;
    }
};*/

//Iterative
//Using 2 Stack
class Solution {
public:    
    //left right root
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postorder;
        if(root==NULL) return postorder;
        stack<TreeNode*>st1,st2;
        st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL){
                  st1.push(root->left);  
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
        }
        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
};











