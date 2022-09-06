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
    int helper(TreeNode* root){
        if(root==NULL){
        return 0;
        }
        
        if(root->left==NULL && root->right==NULL){
            if(root->val==0){
                   return 0;
            }
            else{
                return 1;
            }
        }
            int leftsubtreeones=helper(root->left);
            int rightsubtreeones=helper(root->right);
            
            if(leftsubtreeones==0){
               root->left=NULL;
            }
              if(rightsubtreeones==0){
               root->right=NULL;
            }
             return leftsubtreeones+rightsubtreeones+(root->val==1?1:0);
        }
    
    TreeNode* pruneTree(TreeNode* root) {
        if(helper(root)==0){
            return NULL;
        }
        return root;
    }
};