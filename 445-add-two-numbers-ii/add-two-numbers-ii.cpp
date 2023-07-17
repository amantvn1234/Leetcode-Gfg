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
ListNode* reverse(ListNode* l){
    ListNode*prev=0,*current,*nextnode;
    current=nextnode=l;
    while(current){
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
         int rem=0,sum=0,ans=0;
        ListNode *prev,*t1=l1,*t2=l2;
        while(t1&&t2){
            sum=t1->val+t2->val+rem;
            rem=sum/10;
            t1->val=sum%10;
            prev=t1;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1){
             sum=t1->val+rem;
            rem=sum/10;
            // cout<<sum%10<<endl;
             prev=t1;
            t1->val=sum%10;
            t1=t1->next;
        }
        t1=prev;
        while(t2){
             sum=t2->val+rem;
            rem=sum/10;
            ListNode* node=new ListNode(sum%10);
           t1->next=node;
           t1=node;
            t2=t2->next;
        }
        if(rem)
        {
            ListNode* node=new ListNode(rem);
           t1->next=node;
        }
       l1= reverse(l1);
        return l1;
    }
};