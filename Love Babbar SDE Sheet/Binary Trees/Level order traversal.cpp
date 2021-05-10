 vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> res;
      queue<Node*> q;
      q.push(node);
      
      while(!q.empty()){
          node = q.front();
          q.pop();
          res.push_back(node->data);
          
          if(node->left){
              q.push(node->left);
          }
          if(node->right){
              q.push(node->right);
          }
      }
      return res;
    }