/*
Given the root of a binary tree, invert the tree, and return its root.

 

Example 1:


Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
*/
class Solution {
public:
    /*
    Recursive 
    
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;
        TreeNode* temp= root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(temp);
        
        return root;
        
    }
    */
    
    //Non recursive
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return root;
        queue<TreeNode*> q;  // using level order traversal/ bsf that's why using queue
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp->left != nullptr) q.push(temp->left);
            if(temp->right != nullptr) q.push(temp->right);
            
            TreeNode* t = temp->left; // swapping , we can also do it using inbuilt swap
            temp->left = temp->right;
            temp->right = t;
        }
        return root;
    }

    
};