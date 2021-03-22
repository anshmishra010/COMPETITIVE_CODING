DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *temp = head;
DoublyLinkedListNode *crnt = head;
while(crnt!=NULL)
{
temp = crnt->prev;
crnt->prev = crnt->next;
crnt->next = temp;
crnt = crnt->prev;
}
if(temp!=NULL)
{
head = temp->prev;
}
return head;
}