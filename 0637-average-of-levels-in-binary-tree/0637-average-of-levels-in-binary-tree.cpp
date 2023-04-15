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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        double cnt = 0, sum = 0;
        while (!q.empty()){

            TreeNode* top = q.front();
            q.pop();

            if (top){

                cnt++;
                sum += top->val;

                if (top->left)
                    q.push(top->left);

                if (top->right)
                    q.push(top->right);
            }
            else {
                ans.push_back(sum / cnt);
                cnt = sum = 0;

                if (q.empty()){
                    break;
                }
                else {
                    q.push(NULL);
                }
            }
        }     
        return ans;   
    }
};