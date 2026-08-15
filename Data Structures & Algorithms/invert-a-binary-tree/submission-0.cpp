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
    void invert(TreeNode* temp){
        if(!temp){
            return;
        }
        invert(temp->left);
        invert(temp->right);
        TreeNode* a;
        a = temp->left;
        temp->left = temp->right;
        temp->right = a;
    }
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* temp;
        temp = root;
        invert(temp);
        return root;
        }
};
