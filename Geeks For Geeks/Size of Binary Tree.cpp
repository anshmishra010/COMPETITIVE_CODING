int getSize(Node* node)
{
   // Your code here
   if(node == NULL)
   {
       return 0;
   }
   else
   {
       return (getSize(node->left)+1+getSize(node->right));
   }
}