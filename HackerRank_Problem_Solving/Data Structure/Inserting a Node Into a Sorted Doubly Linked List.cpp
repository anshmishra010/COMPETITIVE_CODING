DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

DoublyLinkedListNode *p = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
DoublyLinkedListNode *q = head;
p->data= data;
if(q->data>data)
{
    q->prev = p;
    p->next = q;
    p->prev = NULL;
    head = p;
    return head;
}
while(q!=NULL)
{
    if (q->data >= data)
    {
        p->next = q;
        p->prev = q->prev;
        q->prev->next = p;
        return head;
    }
    else if (q->next==NULL)
    {
        q->next = p;
        p->prev = q;
        p->next = NULL;
        return head;
    }
    q = q->next;
}
return head;
}
