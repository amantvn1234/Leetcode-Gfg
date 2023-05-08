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
    void leveltrav(vector<vector<int>> & all,int level,TreeNode*r){
if(r==0)
return ;
if(all.size()==level){
    all.push_back(vector<int>());
}
all[level].push_back(r->val); // insert element in current level
leveltrav(all,level+1,r->left); // call left subtree with increasing level
leveltrav(all,level+1,r->right); // call right subtree with increasing level
 }

 void reverseodd(vector<vector<int>> & all,int level,TreeNode*r){
if(r==0){
return ;}

if(level%2==1){
r->val=all[level][all[level].size()-1];
all[level].pop_back();
}
reverseodd(all,level+1,r->left); // call left subtree with increasing level
reverseodd(all,level+1,r->right); // call right subtree with increasing level

 }
    TreeNode* reverseOddLevels(TreeNode* root) {
       vector<vector<int>> alllevels;
       leveltrav(alllevels,0,root);
        reverseodd(alllevels,0,root);
      return root;
    }
};