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

    void traversal(TreeNode *root, vector<int>& res){
         if(root == NULL) { return;}
        traversal(root->left,res);
        res.push_back(root->val);
        traversal(root->right,res);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        traversal(root,res);

        // light root right
        // i am doing by rercursion first 
       
        return res;
    }
};