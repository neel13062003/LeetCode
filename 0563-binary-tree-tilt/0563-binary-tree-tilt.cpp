// TC: O(N)
// SC: Auxiliary Stack Space O(N) - When Recursive Stack Space is using

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
    pair<int,int> solve(TreeNode* root){
        // base case
        if(root==NULL)return {0,0};
        
        pair<int,int> left  = solve(root->left);
        pair<int,int> right = solve(root->right);
        return {
                 left.first  + right.first + root->val ,
                 left.second + right.second + 
                 abs(left.first - right.first)
               };
    }
    int findTilt(TreeNode* root) {
        pair<int,int>ans = solve(root);
        return ans.second;
    }
};


// pair<int,int> ans
// ans.first  = sum of all node value of its left/right subtree
// ans.second = sum of all tilt