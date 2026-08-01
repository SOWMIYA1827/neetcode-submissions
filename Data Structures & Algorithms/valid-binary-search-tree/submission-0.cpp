class Solution {
private:
    bool inorder(TreeNode* root, TreeNode*& prev) {
        if (root == nullptr) {
            return true;
        }
         if (!inorder(root->left, prev)) {
            return false;
        }

        if (prev != nullptr && root->val <= prev->val) {
            return false;
        }
        
        prev = root;
        return inorder(root->right, prev);
    }

public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        return inorder(root, prev);
    }
};
