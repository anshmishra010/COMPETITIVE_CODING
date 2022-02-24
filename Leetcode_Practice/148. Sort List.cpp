/*
Given the head of a linked list, return the list after sorting it in ascending order.
*/

ListNode* sortList(ListNode* head) {
        //using merge sort and recursion
        if(head == nullptr or head->next == nullptr) return head;
        ListNode* slow = head, *fast = head->next-> next;
        while(fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        // at this moment slow is at the middle of the list and fast is out of bound
        // now dividing into 2 parts
        ListNode* right_side = sortList(slow->next);
        slow->next = nullptr; // cutting the list into 2 parts;
        ListNode* left_side = sortList(head);
        
        return merging_after_dividing(left_side, right_side);
        
    }
    
    ListNode* merging_after_dividing(ListNode* left, ListNode* right)
    {
        ListNode* start = new ListNode(0), * moving_node;
        moving_node = start;
        
        while(left and right)
        {
            if(left->val < right->val){
                moving_node->next = left;
                left = left->next;
            }
            else{
                moving_node->next = right;
                right = right->next;
            }
            moving_node = moving_node->next;
        }
        
        // if after the itration any node is missed 
        if(left) moving_node->next = left;
        else moving_node->next = right;
        
        return start->next;
        
    }