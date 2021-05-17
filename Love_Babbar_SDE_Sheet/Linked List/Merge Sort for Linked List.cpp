class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    void MergeM(Node** head)
    {
        Node* cur = * head;
        // first part of LL
        Node* firstL;
        // second part of LL
        Node* secL;
         
        if(!cur or !cur->next){
            return;
        }
        // as in merge sort we have to find middle element to divide list into 2 part
        Mid(cur, &firstL , &secL);
        // after finding middle is whole list we will find it in first list 
        MergeM(&firstL);
        // after finding middle is whole list we will find it in second list 
        MergeM(&secL);
        // here we are merging the list
        *head = MergeB(firstL , secL);
    }
    void Mid(Node* cur , Node** firstL , Node** secL)
    {
        // using fast and slow ptr technique
        Node* fast;
        Node* slow;
        
        slow = cur;
        fast = cur->next;
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        
        // partioned of main linked list after finding middle element
        // first ll will be from cur to slow
        // second ll will be slow->next to NULL
        *firstL = cur;
        *secL = slow->next;
        // breaking 1st and 2nd ll
        slow->next = NULL;
    }
    
    Node* MergeB(Node* firstL , Node* secL)
    {
        Node* dummy = NULL;
        if(!firstL){
            return secL;
        }
        else if(!secL){
            return firstL;
        }
        
        if(firstL->data < secL->data){
            dummy = firstL;
            dummy->next = MergeB(firstL->next , secL);
        }
        else{
            dummy = secL;
            dummy->next = MergeB(firstL , secL->next);
        }
        return dummy;
    }
    
    Node* mergeSort(Node* head) {
        // your code here
        MergeM(&head);
        return head;
    }
};
