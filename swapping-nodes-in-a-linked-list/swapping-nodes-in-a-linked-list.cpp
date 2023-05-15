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
        int firstk=k,lastk,countnodes=0;
        ListNode *tmp=head,*last=head,*first=head;
        while(tmp!=NULL){
            countnodes++;
            tmp=tmp->next;
        }
        lastk=countnodes-k+1;
        int i=1,j=1;
        while(i<firstk){
            first=first->next;
            i++;
        }
        while(j<lastk){
            last=last->next;
            j++;
        }
        swap(first->val,last->val);
        return head;
    }
};