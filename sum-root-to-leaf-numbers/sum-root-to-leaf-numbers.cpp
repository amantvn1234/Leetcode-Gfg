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
void pathhelper(vector<vector<int>>&allpath,vector<int>onepath,TreeNode*root){
     if(root==0)   // base case
     return;
     onepath.push_back(root->val);  // onepath giving root to current node path

    if(root->left==0&&root->right==0){  // base case
        allpath.push_back(onepath);
        return ;// as we are at leaf node no need to traverse further
    }
    pathhelper(allpath,onepath,root->left);
    pathhelper(allpath,onepath,root->right);
 }
    int sumNumbers(TreeNode* root) {
        vector<vector<int>> paths;
        vector<int> apath;
        pathhelper(paths,apath,root);
        int allpathsum=0;
        for(int i=0;i<paths.size();i++){
            int val=0;
            for(int j=0;j<paths[i].size();j++){
                val=val*10+paths[i][j];
            }
            allpathsum+=val;
        }
        return allpathsum;
    }
};