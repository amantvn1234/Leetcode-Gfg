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
   int height(TreeNode*root){
       if(root==0)
       return -1;
       return 1+max(height(root->left),height(root->right));
   }
   void diahelper(TreeNode*root,int *maxi){
       if(root==0)
       return;
        int left=1+height(root->left);  //i
     int right=1+height(root->right);//ii
     int currdia=max(left+right,max(right,left));//iii
     *maxi=max(*maxi,currdia);//iv   i,ii,iii is used to find the diameter having node root included in b/w (iv) is used to store maxi of all dia...
     diahelper(root->left,maxi); // to traverse left subtree
     diahelper(root->right,maxi);// to traverse right subtree
   }
    int diameterOfBinaryTree(TreeNode* root) {
        cout<<height(root);
    //  if(root==0)
    //  return 0;
    int maxi=0;
    diahelper(root,&maxi);  // it is used to find diameter for each node(i.e sare node ki diameter and store maximum of all diameter in maxi)
    return maxi;
    }
};