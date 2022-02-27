/*
You are given the root node of a binary search tree (BST) and a 
value to insert into the tree. Return the root node of the BST 
after the insertion. It is guaranteed that the new value does not 
exist in the original BST.

Notice that there may exist multiple valid ways for the insertion
, as long as the tree remains a BST after insertion. 
You can return any of them.

Example 1:

Input: root = [4,2,7,1,3], val = 5
Output: [4,2,7,1,3,5]
*/

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        if (val > root->val) root->right = insertIntoBST(root->right, val); // Continue searching in the right subtree
        else root->left = insertIntoBST(root->left, val); // Continue searching in the left subtree
        return root;
    }
};