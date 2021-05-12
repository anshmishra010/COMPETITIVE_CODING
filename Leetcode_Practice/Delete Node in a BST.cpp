/*
 Given a root node reference of a BST and a key, delete the node with the given key in the BST. 
 Return the root node reference (possibly updated) of the BST.
*/



class Solution {
public:
    
    TreeNode* insuc(TreeNode* root){
        TreeNode* cur = root;
        while(cur && cur->left != NULL){
            cur = cur->left;
        }
        return cur;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }
        else if( key < root->val){
            root->left = deleteNode(root->left , key);
        }
        else if (key > root->val){
            root->right = deleteNode(root->right , key);
        }
        else{
            if(root->left == NULL){
                TreeNode* temp = root->right;
                delete(root);
                return temp;
            }
            else if(root->right == NULL){
                TreeNode* temp = root->left;
                delete(root);
                return temp;
            }
            else{
                TreeNode* temp = insuc(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right , temp->val);
            }
        }
        return root;
    }
};