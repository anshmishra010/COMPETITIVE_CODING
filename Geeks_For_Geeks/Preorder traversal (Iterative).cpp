vector<int> preOrder(Node* root)
{
    //code here
    vector<int> res;
    stack<Node*> st;
    Node* temp= NULL;
    
    st.push(root);
    while(!st.empty()){
        temp = st.top();
        st.pop();
        res.push_back(temp->data);
        
        // we will be firstly pushing right data and then left , as stack is LIFO
        if(temp->right != NULL){
            st.push(temp->right);
        }
        if(temp->left != NULL){
            st.push(temp->left);
        }
    }
    return res;