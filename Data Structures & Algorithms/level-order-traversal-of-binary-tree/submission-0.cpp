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
    vector<vector<int>> result ;

    void traversenode (TreeNode* root , int level){

        if( root == nullptr){
            return ;
        }

        if( level == result.size()){
            result.push_back({});
        }

        result[level].push_back( root->val );
        traversenode( root->left , level+1 );
        traversenode( root->right , level+1 );
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        traversenode( root , 0 ) ;
        return result ;
    }
};