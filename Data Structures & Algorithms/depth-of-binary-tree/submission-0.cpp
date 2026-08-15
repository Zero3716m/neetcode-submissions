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
    int maxd(TreeNode* root, int max){
        int l = 0, r = 0;
        if(!root->left){
            l = 0;
        }else{
            l = maxd(root->left, max);
        }
        if(!root->right){
            r = 0;
        }else{
            r = maxd(root->right, max);
        }


        max = 1 + std::max(l, r);
        return max;
    }
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int max = 0;
        max = maxd(root, max);
        return max;

    }
};
