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
    ListNode* oddEvenList(ListNode* head) {
        if(head!=NULL && head->next!=NULL)
        {
            ListNode *result,*preresult,*evenlist, *oddlist;
            preresult=new ListNode(head->val);
            result=preresult;
            oddlist=head;
            evenlist=head->next;
           while(oddlist->next!=NULL && oddlist->next->next!=NULL)
           {
               preresult->next=new ListNode(oddlist->next->next->val);
               oddlist=oddlist->next->next;
               preresult=preresult->next;
           }
            preresult->next=new ListNode(head->next->val);
            preresult=preresult->next;
             while(evenlist->next!=NULL && evenlist->next->next!=NULL)
           {
               preresult->next=new ListNode(evenlist->next->next->val);
               evenlist=evenlist->next->next;
               preresult=preresult->next;
           }
            return result;
        }
        return head;
    }
};
