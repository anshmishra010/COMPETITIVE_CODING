/*
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example 1:

Input: p = [1,2,3], q = [1,2,3]
Output: true
*/

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL or q == NULL){
        return p == q;
    }
    if(p->val != q->val ){
        return false;       
    }
    return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);

}     

