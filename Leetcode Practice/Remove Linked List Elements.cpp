class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        for(auto node = head; node!=NULL;)
        {
            if(node == head && node->val == val){
                head =  head->next;
                delete node;
                node = head;
            }
            else if(node->next != NULL && node->next->val == val)
            {
                auto temp = node->next;
                node->next =  node->next->next;
                delete temp;
            }
            else
            {
                node= node->next;
            }
        }
        return head;
    }
};

//another approach we just change the link and not to delete 
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val){
            head=head->next;
        }
        if(nullptr==head)
            return head;
        
        ListNode * p=head, *pp=head->next;
        while(pp){
            if(pp->val==val){
                p->next=pp->next;
            } else {
                p=pp;
            }
            pp=pp->next;
        }
        return head;
    }