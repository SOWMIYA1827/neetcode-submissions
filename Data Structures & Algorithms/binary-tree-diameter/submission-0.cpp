class Solution {
public:
    int best = 0;

    int height(TreeNode* root) {

        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        best = max(best, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {

        height(root);

        return best;
    }
};