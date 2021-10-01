//Given the root of a binary tree. Check whether it is a BST or not.

bool helper (Node* root, Node*mini, Node*maxi){
        if(root == NULL) return true;
        if(mini != NULL and root->data <= mini->data) return false;
        if(maxi != NULL and root->data >= maxi->data) return false;
        
        bool left = helper(root->left, mini , root);
        bool right = helper(root->right,root,maxi);
        
        return left and right;
    }
    bool isBST(Node* root) 
    {
        // Your code here
        bool res = helper(root, NULL, NULL);
        return res;
    }