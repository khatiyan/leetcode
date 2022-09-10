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
        
        vector<int> v;
        ListNode *temp = head;
        ListNode* temp1;
        for(int i = 0;i<left-1;i++)
        {
            temp = temp->next;
        }
        temp1=temp;
        for(int i=0;i<(right-left)+1;i++){
          v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i:v){
           cout<<i<<" ";
        }
        reverse(v.begin(),v.end());
        
          for(int i=0;i<v.size();i++){
            temp1->val = v[i];
              temp1 = temp1->next;
        }
        return head;
        
    }
};