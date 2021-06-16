/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.
Example 1:

Input: root = [1,null,2,3]
Output: [1,3,2]
*/

// using recursion
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& res){
        if(root == NULL) return;
        
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>res;
        inorder(root,res);
        
        return res;
    }
};