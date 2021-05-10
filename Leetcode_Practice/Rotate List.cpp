
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k== 0) return head;
        int len = 1;
        int i = 0;
        ListNode* temp = head;
        while(temp->next!= NULL){
            temp = temp->next;
            len++;
        }
        temp->next = head;
        k = len - k%len;
           while(k--){
            temp = temp->next;
          }        
           head = temp->next;
           temp->next = NULL;
        
        return head;
   }
};