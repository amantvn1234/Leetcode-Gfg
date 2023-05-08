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
bool pathsumhelper(vector<int>onepath,TreeNode*root,int target){
     if(root==0)   // base case
     return false;

     onepath.push_back(root->val);  // onepath giving root to current node path

    if(root->left==0&&root->right==0){  // base case
        if(target==root->val)
        return true;
       // as we are at leaf node no need to traverse further
    }

    if(pathsumhelper(onepath,root->left,target-root->val)==true)
    return true; // leftsubtree
    if(pathsumhelper(onepath,root->right,target-root->val)==true)
    return true; // rightsubtree
    return false;
 }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> onepath;
        return pathsumhelper(onepath,root,targetSum);
    }
};