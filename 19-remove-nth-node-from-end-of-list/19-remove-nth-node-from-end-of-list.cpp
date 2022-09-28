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
        if(head->next==NULL){
            return NULL;
        }
        int count=1;
         ListNode*temp=head;
        while(temp->next!=NULL){
           temp=temp->next;
            count++;
        }
        
        int p=count-n;
         ListNode*curr=head;
         ListNode*prev=NULL;
         ListNode*forward=NULL;
        if(p==0){
            forward=curr->next;
            prev=curr;
            curr=forward;
            delete prev;
            return curr;
        }
        while(p>0){
            forward=curr->next;
            prev=curr;
            curr=forward;
            p--;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        return head;
        
    }
};