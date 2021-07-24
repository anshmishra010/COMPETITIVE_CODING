/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
Example 1:

Input: root = [1,null,2,3]
Output: [1,3,2]
*/


class Solution {
public:
    /*
    // using recursion

    void inorder(TreeNode* root, vector<int>& res){
        
        // using recurison 
        if(root == NULL) return;
        
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>res;
        inorder(root,res);
        
        return res;
        */
        
        /*
        // iterative 

      vector<int> inorderTraversal(TreeNode* root) {
          vector<int> res;
          stack<TreeNode*> st;
          TreeNode* pc = root;
          
          while(!st.empty() or pc)
          {
              if(pc)
              {
                  st.push(pc);
                  pc = pc->left;
                      
              }
              else
              {
                  TreeNode* temp = st.top();
                  res.push_back(temp->val);
                  st.pop();
                  pc = temp->right;  // will be going right side of the top element
        
              }
          }
          return res;
      }
      */
    
    //Morris Traversal TC- O(N) SC- O(1)
     vector<int> inorderTraversal(TreeNode* root) {
         vector<int> res;
         if(root == NULL){
             return res;
         }
         
         while(root){
             if(root->left != NULL){
                 TreeNode* pre = root->left;
                 while(pre->right and pre->right != root){
                     pre = pre->right;
                 }
                 if(pre->right == NULL){ // creating the virtual node
                     pre->right = root;
                     root= root->left;
                 }
                 else{
                     pre->right = NULL; // restoring the tree
                     res.push_back(root->val);
                     root = root->right;
                 }
             }
             else{
                 res.push_back(root->val);
                 root = root->right;
             }
         }
         return res;
     }
    
        
};