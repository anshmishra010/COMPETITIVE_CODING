int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int i = 0;
    SinglyLinkedListNode* curr = head;
    SinglyLinkedListNode* temp = head;
    
    while(curr!=NULL)
    {
        curr=curr->next;
        if(i++> positionFromTail)
        {
            temp=temp->next;
        }
    }
    return temp->data;    


}