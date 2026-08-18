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
    int check(TreeNode* head, bool& a){
        if(!head || !a) {
            return 0;
        }
        int lh = check(head->left, a);
        int rh = check(head->right, a);
        if(std::abs(lh - rh) > 1){
            a = false;
        }
        return 1 + std::max(lh, rh);

    }
    bool isBalanced(TreeNode* root) {
        bool a = true;
        check(root, a);
        if(!a){
            return false;
        }else return true;
    }
};
