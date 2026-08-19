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
    void check(TreeNode* head, bool& ch, stack<int>& arr){
        if(!ch || !head) return;
        check(head->left, ch, arr);
        if(!arr.empty()){
            if(arr.top() >= head->val) ch = false;
        }
        arr.push(head->val);
        check(head->right, ch, arr);
    }
    bool isValidBST(TreeNode* root) {
        bool ch = true;
        stack<int> arr;
        check(root, ch, arr);
        return ch;
    }
};
