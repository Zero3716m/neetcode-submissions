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
    void check(TreeNode* head, int& ans, vector<int>& arr, int& k){
        if(arr.size() == k || !head) return;
        check(head->left, ans, arr, k);
        arr.push_back(head->val);
        if(arr.size() == k) ans = head->val;
        check(head->right, ans, arr, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        vector<int> arr;
        check(root, ans, arr, k);
        return ans;
    }
};
