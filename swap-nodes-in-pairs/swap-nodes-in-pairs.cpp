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
    ListNode* swapPairs(ListNode* head) {
        ListNode*n1=head,*n2;
        if(n1==NULL||n1->next==NULL)  // less than two nodes
        return head;
        
        // if more than two nodes handel first two nodes seperately to update headthen left nodes
     n2=n1->next;
     n1->next=n2->next;
     n2->next=n1;
      head=n2;
     n1=n1->next;
     n2=n2->next; // used to link two pairs 

     while(n1&&n1->next){  // it means jab tak 2 ya usse jyada nodes hon
     n2->next=n1->next;
     n2=n1->next;
     n1->next=n2->next;
     n2->next=n1;
     n1=n1->next;
     n2=n2->next;
     }
    return head;
    }
};