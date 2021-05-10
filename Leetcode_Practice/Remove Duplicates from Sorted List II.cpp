class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* temp = dummy->next ; ListNode* prev = dummy;

     while(temp!=NULL && temp->next!=NULL)
     {
         if(temp->val ==  temp->next->val)
         {
             int x=temp->val;
             while(temp!=NULL && temp->val==x)
             {
                 temp=temp->next;
             }
             prev->next =temp;
         }
         else
         {
             prev = temp;
             temp=temp->next;
         }

     }
     return dummy->next ;

        
    }
};