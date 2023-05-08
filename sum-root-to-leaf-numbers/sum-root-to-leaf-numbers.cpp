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
void pathhelper(int *sum,string onepath,TreeNode*root){
     if(root==0)   // base case
     return;
     onepath.push_back(root->val+'0');  // onepath giving root to current node path

    if(root->left==0&&root->right==0){  // base case
       *sum+=stoi(onepath);
        return ;// as we are at leaf node no need to traverse further
    }
    pathhelper(sum,onepath,root->left);
    pathhelper(sum,onepath,root->right);
 }
    int sumNumbers(TreeNode* root) {
        // vector<string> paths;
        string apath;
        int allpathsum=0;
        pathhelper(&allpathsum,apath,root);
        
        // for(int i=0;i<paths.size();i++){
        //     allpathsum+=stoi(paths[i]);
        // }
        return allpathsum;
    }
};