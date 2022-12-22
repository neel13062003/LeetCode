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
/*class Solution {
public:
    vector<int>ans;  //Must Be Declare Outside
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return ans;
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);
        
        return ans;
    }
};*/


//Recursive
/*
class Solution{
    public:
    
    void PrintInorder(TreeNode* root,vector<int>&ans){
        if(!root){
            return;
        }
        PrintInorder(root->left,ans);
        ans.push_back(root->val);
        PrintInorder(root->right,ans);
    }
    
    vector<int>inorderTraversal(TreeNode* root){
        vector<int>ans;
        PrintInorder(root,ans);
        return ans;
    }
};
*/
    
//Iterative using stack
//Inorder=  left root right    
class Solution{
public:
    
    vector<int>inorderTraversal(TreeNode* root){
        vector<int>inorder;
        stack<TreeNode*>st;
        TreeNode* node=root;
        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }else{
                if(st.empty())break;
                node=st.top();
                st.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        return inorder;
    }
};




















