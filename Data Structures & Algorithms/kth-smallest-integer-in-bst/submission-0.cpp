class Solution {
    int count = 0;
    int ans = 0;

    void inorder(TreeNode* root, int k) {
        // Fix 1: Stop traversing if root is null OR we already found the answer
        if (root == nullptr || count >= k) {
            return; 
        }

        inorder(root->left, k);

        if (++count == k) {
            ans = root->val;
            return; // Quick exit
        }

        inorder(root->right, k);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        // Fix 2: Remove the incorrect null check that caused segmentation faults
        inorder(root, k);
        return ans;
    }
};
