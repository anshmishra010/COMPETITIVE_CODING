int minValue(Node* root)
{
    // Code here
    // we can find the minimum by returning the last left leave as it is a BST
    if(root == NULL)
    {
        return NULL;
    }
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
    
}