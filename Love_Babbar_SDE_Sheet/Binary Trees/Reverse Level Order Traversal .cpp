/*
Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level.

Example 1:

Input :
        1
      /   \
     3     2

Output: 3 2 1
Explanation:
Traversing level 1 : 3 2
Traversing level 0 : 1
*/
//https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#





vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> res;
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        root = q.front();
        q.pop();
        res.push_back(root->data);
        
        if(root->right){
            q.push(root->right);
        }
        if(root->left){
            q.push(root->left);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}