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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*tmp=head;
        int size=0;
        if(head==0)
        return head;
        while(tmp->next){
            size++;
            tmp=tmp->next;
        }
        ListNode*end=tmp; // storing link to lastnode
        size++; // count last node
        k%=size;
        if(k==0)
        return head;
        else{
           int count=size-k;
           ListNode* ptr=head,*prev=0;
           while(count--){
               prev=ptr;
               ptr=ptr->next;
           }
           end->next=head;
          head=prev->next;
          prev->next=0;
        }
        return head;
    }
};