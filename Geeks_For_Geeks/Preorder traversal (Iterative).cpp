vector<int> preOrder(Node* root)
{
    vector<int> res;
    stack<Node* > ns;
    if(root == NULL) return NULL;
    ns.push(root);

    while(ns.empty() == false)
    {
        Node* node = ns.top();
        res.push_back(node->data);
        ns.pop();

        if(node->right) ns.push(node->right);
        if(node->left) ns.push(node->left);
    }
    return res;
}