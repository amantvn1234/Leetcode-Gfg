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
           int count=size-k-1;
           ListNode* ptr=head;
           while(count--){
               ptr=ptr->next;
           }
           end->next=head;
          head=ptr->next;
          ptr->next=0;
        }
        return head;
    }
};