class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || k == 1){
            return head;
        }
        //d = dummy node
        ListNode* d= new ListNode(0);
        d->next = head;
        
    //all will be pointing to dummmy  in starting
        ListNode* cur = d, *nex =  d , *pre = d;
        
        //now will be calculating the size of ll
        int count =0;
        while(cur->next != NULL)
        {
            cur = cur->next;
            count++;
        }
        
        //reversing the ll 
        while(count >= k)
        {
            //cur will always point to head of that group
            //so pre next is head
            cur = pre->next;
            
            //nex will always one step ahead to cur
            nex = cur->next;
            
            for(int i=1;i<k;i++)
            {
                //head next will point to nex , next . It means the third ele
                cur->next = nex->next;
                
                //secod ele will point to first 
                //as pre was pointing dummy and dummy next will head;
                nex->next = pre->next;
                
                //pre was pointing to head
                // now to the second ele
                pre->next = nex;
                
                //we have to move nex but we can do nex = nex->next. As nex is pointing to prev
                //so earlier we made cur to point ahead 
                // so as said earlier we have to take care that nex is ahead of cur
                nex = cur->next;
            }
            pre = cur;
            count -=k;
        }
        return d->next;
    }
};

//============================================================================
/*
Anyother way 


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* temp = head;
        int count = k;
        
        if(lessThanK(head,k)){
            return head;
        }
        
        while(count && curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count --;
        }
        
        head->next = reverseKGroup(curr,k);
        return prev;
    }
    
    bool lessThanK(ListNode* head, int k){
        
        while(head && k){
            head = head->next;
            k--;
        }
        
        return k>0;
    }
};

*/