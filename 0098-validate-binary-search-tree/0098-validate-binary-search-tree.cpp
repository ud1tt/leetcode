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
    
    void inorder(TreeNode* root, vector<int> &result){
        if(root==NULL){
            return;
        }
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
    
    bool isValidBST(TreeNode* root){
        vector<int> result;
        inorder(root,result);
        
        for(int i=0;i<result.size()-1;i++){
            // for(int j = i+1;j<result.size();j++){
            //     if(result[i]>=result[j]){
            //         return false;
            //         break;
            //     }
            if(result[i]>=result[i+1]){
                return false; 
            }
        }
        return true;
    }
};