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
    int ans = 0;
    void trav(TreeNode* root, vector<int>& cur){
        if(!root) return;
        cur[root->val]++;    
        trav(root->left, cur); 
        trav(root->right, cur); 
        if(root->left == nullptr && root->right == nullptr){
            int odd=0;
            for(int i=1;i<=9;i++){
                if(cur[i]%2!=0)
                    odd++;
            }
            if(odd<=1) ans++;
        } 
         cur[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> cur(10, 0);
        trav(root, cur);
        return ans;
    }
};