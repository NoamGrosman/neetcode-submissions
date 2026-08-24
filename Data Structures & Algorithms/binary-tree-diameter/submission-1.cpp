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
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        dfs(root, res);
        return res;
    }

    private:
    int dfs(TreeNode* root, int& res) {
        if (!root) return 0;
        int left = dfs(root->left, res);
        int right = dfs(root->right, res);
        res = max(res, left + right);
        return 1 + max(left, right);
    }
};


// How to write DFS in C++:
// Define a function called DFS, which receives a starting node, and a second arg of a number of edges/sum of edges etc.
// Using the recursive method, we recursively run dfs on the left sub tree of the original tree, and after that we run it on the right sub tree.
// We update the second arg accordingly depends on what we set it to be.