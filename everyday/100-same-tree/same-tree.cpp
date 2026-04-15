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

// vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> in;
//         stack<TreeNode*> st;
//         TreeNode *node = root;
//         while(true){
//             if(node != NULL){
//                 st.push(node);
//                 node = node->left;
//             }else{
//                 if(st.empty()){break;}
//                 node = st.top();
//                 st.pop();

//                 in.push_back(node->val);
//                 node = node->right;

//             }
//         }
//         return in;
//     }

    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q)
        {
            if(p==q)    return true;
            else return false;
        }
        return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};