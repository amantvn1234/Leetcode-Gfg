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
void pathsumhelper(vector<vector<int>>&allpath,vector<int>onepath,TreeNode*root,int target){
     if(root==0)   // base case
     return;

     onepath.push_back(root->val);  // onepath giving root to current node path

    if(root->left==0&&root->right==0){  // base case
        if(target==root->val)
        allpath.push_back(onepath);
        return ;// as we are at leaf node no need to traverse further
    }

    pathsumhelper(allpath,onepath,root->left,target-root->val); // leftsubtree
    pathsumhelper(allpath,onepath,root->right,target-root->val); // rightsubtree
 }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> tmp;
        pathsumhelper(ans,tmp,root,targetSum);
        return ans;
    }
};