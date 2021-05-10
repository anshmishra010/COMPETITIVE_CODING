    void inorderUtil (Node *root, vector <int> &res)
    {
        if (root == NULL)return;
        inorderUtil(root->left, res);
        res.push_back (root->data);
        inorderUtil(root->right, res);
    }
    
    public:
    vector <int> inOrder(struct Node *root) {
        vector <int> res;
        inorderUtil (root, res);
        return res;
    }