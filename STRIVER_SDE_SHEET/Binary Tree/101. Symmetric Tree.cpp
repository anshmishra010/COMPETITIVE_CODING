/*
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return false;
       return helper(root->left,root->right);
    }
    bool helper(TreeNode*left,TreeNode*right){
        if(left == nullptr or right == nullptr) return left == right;
        if(left->val != right->val) return false;
        return helper(left->left,right->right) and helper(left->right,right->left);
    }
    
};*/
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return false;
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty())
        {
            TreeNode* t1 = q.front();
            q.pop();
            TreeNode* t2 = q.front();
            q.pop();
            
          
            if(!t1 and t2) return false;
            if(t1 and !t2) return false;
            if(t1 and t2){
                if(t1->val != t2->val) return false;
                q.push(t1->left);
                
                q.push(t2->right);
                q.push(t1->right);
                q.push(t2->left);
            }
        }
        return true;
        
    }
};
