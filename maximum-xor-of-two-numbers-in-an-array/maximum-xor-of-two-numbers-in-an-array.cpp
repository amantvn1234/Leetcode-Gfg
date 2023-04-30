class Solution {
public:
class node{
  public:
    vector<node*> child;
    bool endofval;
    node(){
        child.resize(2,NULL);
        endofval=false;
    }
};
void insert(int val,node*r){ // it insert value in the Trie 
    for(int i=30;i>=0;i--){
        int idx=(val&(1<<i))>0?1:0;
        if(r->child[idx]==NULL)
        r->child[idx]=new node();
        r=r->child[idx];
    }
    r->endofval=true;
}
int maxi_xor_for_num(int val,node *r,int level){ // it will return maximum xor of any value in array with val(given integer)
if(level<0) return 0;
int bit=(val&(1<<level))>0?1:0;
int oppbit=1-bit;
if(r->child[oppbit]!=NULL){
    return (1<<level)+maxi_xor_for_num(val,r->child[oppbit],level-1);
}
else
return maxi_xor_for_num(val,r->child[bit],level-1);
}
    int findMaximumXOR(vector<int>& nums) {
      node* root=new node(); 
      int ans=0; 
    // for(int i=0;i<nums.size();i++){
    //     insert(nums[i],root);
    //     ans=max(ans,maxi_xor_for_num(nums[i],root,30));
    // }
    for(int i=0;i<nums.size();i++){
        insert(nums[i],root);
            }
    for(int i=0;i<nums.size();i++){
        ans=max(ans,maxi_xor_for_num(nums[i],root,30));
    }
    return ans;
    }
};