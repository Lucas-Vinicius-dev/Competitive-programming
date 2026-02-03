#include "std_includes.h"


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool finder(TreeNode* node, int sum, int targetSum) {
        if (node) {
            sum += node->val;
            if (!node->left && !node->right) {
                if (sum == targetSum) {
                    return true;
                }
                return false;
            }

            bool left = finder(node->left, sum, targetSum);
            bool right = finder(node->right, sum, targetSum);

            return (left || right);
        }
        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return finder(root, 0, targetSum);
    }
};

/* Average Performance
    Runtime: 0ms | Beats 100.00%
    Memory: 21.58MB | Beats 33.47%
*/