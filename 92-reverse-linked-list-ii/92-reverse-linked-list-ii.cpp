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
      ListNode* reverse( ListNode* &head){
                ListNode*prev=NULL;
             ListNode*curr=head;
           ListNode*forward=head;
          while(curr!=NULL){
              forward=curr->next;
              curr->next=prev;
              prev=curr;
              curr=forward;
          }
          return prev;
      }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // if(head->next==NULL)
        //     return head;
        // if(head->next->next==NULL)
        //     return head;
        // ListNode*prev=head->next;
        // ListNode*curr->data=left;
        // ListNode*forward->data=left;
        // while(curr->next->data!=right){
        // forward=curr->next;
        // curr->next=prev;
        //     prev=curr;
        //     curr=forward;
        // }
        // head->next->next=forward;
        // head->next=prev;
        // return head;
        if(head== NULL || left==right )
            return head;
        
                 ListNode* prev, *tail = NULL, *temp = NULL;
        ListNode dummy(NULL);
        prev = &dummy;
        dummy.next = head;
        for(int i=0; i < left-1; i++){
            prev = prev->next;
        }
        tail = prev->next;
        for(int i=0; i< right - left;i++){
            temp = prev->next;
            prev->next = tail->next;
            tail->next = tail->next->next;
            prev->next->next = temp; 
        }
        
        return dummy.next;
    }
};