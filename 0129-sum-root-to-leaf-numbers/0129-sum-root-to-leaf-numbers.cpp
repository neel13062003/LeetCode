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
    void preorder(TreeNode* node, int val, int &answer) {
        if (node == NULL)
            return;

        val = val * 10 + node->val;

        if (node->left == NULL && node->right == NULL) {
            answer += val;
            return;
        }

        preorder(node->left, val, answer);
        preorder(node->right, val, answer);    
    }


    int sumNumbers(TreeNode* root) {
        int val = 0, answer = 0;

        preorder(root, 0, answer);

        return answer;
    }
};