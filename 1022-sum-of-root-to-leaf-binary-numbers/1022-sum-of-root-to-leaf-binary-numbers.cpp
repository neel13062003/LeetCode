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
    void solve(TreeNode* root, string s, vector<string>&num){
        if(root->left==NULL && root->right==NULL){
            s.push_back(root->val + '0');
            num.push_back(s);
            s.pop_back();
            return;
        }
        s.push_back(root->val + '0');
        if(root->left)
            solve(root->left,s,num);
        if(root->right)
            solve(root->right,s,num);
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        vector<string>num;
        string s="";
        solve(root,s,num);
        for(int i=0;i<num.size();i++){
            sum+= stoi(num[i],0,2);
        }
        return sum;
    }
};