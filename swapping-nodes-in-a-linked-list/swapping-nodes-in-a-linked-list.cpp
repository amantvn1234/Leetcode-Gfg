/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* n1,*n2=NULL;
        for(auto ptr=head;ptr!=NULL;ptr=ptr->next){
            if(n2!=NULL){
                n2=n2->next;
            }
            else if(--k==0){
                n1=ptr;
                n2=head;
            }
        }
        swap(n1->val,n2->val);
        return head;
    }
};