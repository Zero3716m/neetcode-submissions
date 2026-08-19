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
    void right(TreeNode* head, vector<int>& ans, int h){
        if(!head) return;
        if(ans.size() == h){
            ans.push_back(head->val);
        }
        right(head->right, ans, h + 1);
        right(head->left, ans, h + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int h = 0;
        right(root, ans, h);
        return ans;
    }
};
