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

    private:
        void inorderhelper(TreeNode* root,vector<int>& res){
            if(root==NULL){
                return;
            }
            inorderhelper(root->left,res);
            res.push_back(root->val);
            inorderhelper(root->right,res);
        }
    public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        inorderhelper(root,result);
        return result;
    }
};