bool isCircular(Node *head)
{
   // Your code here
   Node* temp = head->next;
   while(temp!=NULL && temp!=head)
   {
       temp = temp->next;
   }
   return (temp == head);
}