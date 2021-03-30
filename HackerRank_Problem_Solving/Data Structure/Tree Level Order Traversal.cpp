void levelOrder(Node * root) {
        
        if(root == NULL){
            return;
        }
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            Node* nde = q.front();
            cout<<nde->data<<" ";
            q.pop();
            if(nde->left != NULL){
                q.push(nde->left);
            }
            if(nde->right != NULL){
                q.push(nde->right);
            }   
        }
    }