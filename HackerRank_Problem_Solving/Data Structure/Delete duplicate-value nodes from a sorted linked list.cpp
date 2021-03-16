SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* curr = head;
    SinglyLinkedListNode* temp;
    
    while(curr->next != NULL)
    {
            if(curr->data == curr->next->data)
            {
               temp = curr->next->next;
               free(curr->next);
               curr->next = temp; 
            }
            else
            {
                curr = curr->next;
            }
    }
    return head;
}