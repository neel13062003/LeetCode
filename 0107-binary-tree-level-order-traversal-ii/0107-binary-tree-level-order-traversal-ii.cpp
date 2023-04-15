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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL)return {};
        vector<vector<int>> ans;
        vector<int> v;
        int n;
        queue<TreeNode*> q;
        TreeNode* p;
        q.push(root);
        while(!q.empty()){
            n = q.size();
            v.clear();
            while(n--){
                p = q.front();
                q.pop();
                v.push_back(p->val);
                if(p->left){
                    q.push(p->left);
                }if(p->right){
                    q.push(p->right);
                }
            }
            ans.insert(ans.begin(),v);
        }
        return ans;
    }
};