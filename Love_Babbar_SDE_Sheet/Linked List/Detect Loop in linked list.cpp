    bool detectLoop(Node* head)
    {
        // your code here
        //floyds cycle algo
        Node* slow = head, *fast = head;
        
        while(fast!=NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};