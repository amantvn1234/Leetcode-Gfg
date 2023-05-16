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
        ListNode* tmp=head;
        int totalcnt=0,localcnt=1;
        while(tmp){
            totalcnt++;
            tmp=tmp->next;
        }
        int delnode=totalcnt-n+1;
        if(delnode==1)
        {
            head=head->next;
        }
        else{
            ListNode* prev,*current=head;
            while(localcnt<delnode){
                prev=current;
                current=current->next;
                localcnt++;
            }
            prev->next=current->next;
            delete(current);
        }
        return head;
    }
};