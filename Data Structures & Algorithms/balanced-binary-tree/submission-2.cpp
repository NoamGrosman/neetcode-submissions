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
    bool isBalanced(TreeNode* root) {
        return dfs(root)[0]; // Meaning return the first value of the vector (True/False)
    }

    private:
    vector<int> dfs(TreeNode* root) { // { True/False , height }
        if (!root) return {1, 0}; // {1,0} -> {balanced = true, height = 0}
        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);
        bool balanced = (left[0] && right[0] == 1) && (abs(left[1] - right[1]) <= 1);
        int height = 1 + max(left[1], right[1]);
        return {balanced, height};
    }
};


// I need to check the height of every sub tree.
// If ht.right - 1 >= ht.left -> true
// If ht.right - 1 <= ht.left -> true
// Otherwise -> false