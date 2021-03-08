SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* a = head1;
    SinglyLinkedListNode* b =head2;
    SinglyLinkedListNode* x = NULL;
    
    if(head1 == NULL)
    {
        return head2;
    }
    else if(head2 == NULL)
    {
        return head1;
    }
    if(head1->data <= head2->data)
    {
        x=head1;
        x->next = mergeLists(head1->next, head2);
    }
    else
    {
        x= head2;
        x->next = mergeLists(head1, head2->next);
    }
    return  x;


}