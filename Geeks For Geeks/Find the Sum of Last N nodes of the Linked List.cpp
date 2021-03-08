int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      int sum=0;
      stack<int> s;
      if(n<0)
      {
          return 0;
      }
      while(head!=NULL)
      {
          s.push(head->data);
          head=head->next;
      }
      while(n--)
      {
         sum+=s.top();
          s.pop();
      }
      return sum;
}