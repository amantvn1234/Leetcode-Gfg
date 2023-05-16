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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head,*slow=head;
     
     for(int i=1;i<=n;i++)
     fast=fast->next;

     if(fast==NULL) return head->next; // as we need to del n==length node which is head and hm head ke pahle koe node rkh nhi sakte jisse hm slow->next=slow->next->next  kr den
     while(fast->next){
         slow=slow->next;
         fast=fast->next;
     }   // by this while loop hmne slow ko jo node del karna usse pahle rkh diye hain
     slow->next=slow->next->next;
     return head;

    }
};