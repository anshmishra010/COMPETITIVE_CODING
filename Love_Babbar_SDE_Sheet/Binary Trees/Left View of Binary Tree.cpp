vector<int> leftView(Node *root)
{
   vector<int> res;
   queue<Node*> q;
   
   if(root == NULL){
       return res;
   }
   q.push(root);
   
   while(!q.empty())
   {
       int n = q.size();
       for(int i=1; i<= n;i++){
           Node* temp = q.front();
           q.pop();
           
           // i ==1 will ensure that only left ele will enter the result array
           if(i == 1) res.push_back(temp->data); 
           if(temp->left) q.push(temp->left);
           if(temp->right)q.push(temp->right);
       }
   }
   return res;
}
/*
SC - O(most number of elements in level)
TC- O(N)
*/