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
void preorder(TreeNode* root,vector<int> & ve){
    if(root==0) return ;
    // ve.push_back(root->val);
    // preorder(root->left,ve);
    // preorder(root->right,ve);
    stack<TreeNode*> st;
    st.push(root);
    while(st.size()){
        TreeNode *tmp=st.top();
      ve.push_back(tmp->val);
        st.pop();
        if(tmp->right)
        st.push(tmp->right);
        if(tmp->left)
        st.push(tmp->left);
    }
}

   
    vector<int> preorderTraversal(TreeNode* root) {
      vector<int> v;
         preorder(root,v);
         return v;   
    }
};